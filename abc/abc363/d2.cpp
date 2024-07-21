#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 大きな整数を表すためのクラス
class BigInteger {
    vector<int> digits;

public:
    BigInteger(string s) {
        for (int i = s.length() - 1; i >= 0; i--) {
            digits.push_back(s[i] - '0');
        }
    }

    BigInteger(long long n = 0) {
        do {
            digits.push_back(n % 10);
            n /= 10;
        } while (n > 0);
    }

    BigInteger operator+(const BigInteger& other) const {
        BigInteger result;
        int carry = 0;
        for (size_t i = 0; i < max(digits.size(), other.digits.size()) || carry; i++) {
            int sum = carry;
            if (i < digits.size()) sum += digits[i];
            if (i < other.digits.size()) sum += other.digits[i];
            result.digits.push_back(sum % 10);
            carry = sum / 10;
        }
        return result;
    }

    BigInteger operator-(const BigInteger& other) const {
        BigInteger result;
        int borrow = 0;
        for (size_t i = 0; i < digits.size(); i++) {
            int diff = digits[i] - borrow;
            if (i < other.digits.size()) diff -= other.digits[i];
            if (diff < 0) {
                diff += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }
            result.digits.push_back(diff);
        }
        while (result.digits.size() > 1 && result.digits.back() == 0) {
            result.digits.pop_back();
        }
        return result;
    }

    BigInteger operator*(const BigInteger& other) const {
        BigInteger result;
        result.digits.resize(digits.size() + other.digits.size(), 0);
        for (size_t i = 0; i < digits.size(); i++) {
            int carry = 0;
            for (size_t j = 0; j < other.digits.size() || carry; j++) {
                int prod = result.digits[i + j] + carry;
                if (j < other.digits.size()) prod += digits[i] * other.digits[j];
                result.digits[i + j] = prod % 10;
                carry = prod / 10;
            }
        }
        while (result.digits.size() > 1 && result.digits.back() == 0) {
            result.digits.pop_back();
        }
        return result;
    }

    bool operator<(const BigInteger& other) const {
        if (digits.size() != other.digits.size())
            return digits.size() < other.digits.size();
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] != other.digits[i])
                return digits[i] < other.digits[i];
        }
        return false;
    }

    string toString() const {
        string s;
        for (int i = digits.size() - 1; i >= 0; i--) {
            s += digits[i] + '0';
        }
        return s.empty() ? "0" : s;
    }
};

BigInteger pow10(int n) {
    string s = "1" + string(n, '0');
    return BigInteger(s);
}

BigInteger nthPalindrome(BigInteger n) {
    if (n < BigInteger(10)) return n - BigInteger(1);

    n = n - BigInteger(10);
    int digits = 1;
    BigInteger count("9");

    while (n < count) {
        n = n - count;
        count = count * BigInteger(10);
        digits++;
    }

    BigInteger prefix = pow10(digits - 1) + n;
    string palindrome = prefix.toString();
    string suffix = palindrome.substr(0, palindrome.length() - 1);
    reverse(suffix.begin(), suffix.end());
    return BigInteger(palindrome + suffix);
}

int main() {
    string input;
    cin >> input;
    BigInteger n(input);
    cout << nthPalindrome(n).toString() << endl;
    return 0;
}
