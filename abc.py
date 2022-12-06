# `low`と`high`の両方向に展開して、最大長の回文を見つけます
def expand(s, low, high):
    length = len(s)
 
    #は両方向に拡張します
    while low >= 0 and high < length and s[low] == s[high]:
        low = low - 1
        high = high + 1
 
    #はパリンドローム部分文字列を返します
    return s[low + 1:high]
 
 
# `O(n²)`時間と `O(1)`空間で最長のパリンドローム部分文字列を見つける関数
def findLongestPalindromicSubstring(s):
 
    #ベースケース
    if not s or not len(s):
        return ''
 
    # `max_str`は、これまでに検出されたパリンドローム部分文字列の最大長を格納します
    min_str = s
 
    # `max_length`は、パリンドロームの最大長を格納します
    # これまでに見つかった#サブストリング
    min_length = len(min_str)
 
    #は、指定された文字列のすべての文字を中点と見なして展開します
    # 最大長の回文を見つけるために両方向に
 
    for i in range(len(s)):
 
        #は、中点として`s[i]`を持つ最長の奇数長の回文を見つけます
        curr_str = expand(s, i, i)
        curr_length = len(curr_str)
 
        #は、奇数の長さの場合、最大長のパリンドロームサブストリングを更新します
        #パリンドロームの長さが長い
 
        if curr_length < min_length:
            min_length = curr_length
            min_str = curr_str
 
        #`s[i]`と`s[i+1]`を次のように使用して最長の偶数長の回文を検索します
        #の中点。偶数の長さの回文には2つの中点があることに注意してください。
 
        curr_str = expand(s, i, i + 1)
        curr_length = len(curr_str)
 
        #は、長さが偶数の場合、最大長のパリンドロームサブストリングを更新します
        #パリンドロームの長さが長い
 
        if curr_length < min_length:
            min_length = curr_length
            min_str = curr_str
 
    return min_str
 
 
if __name__ == '__main__':
 
    s = 'ABDCBCDBDCBBC'
 
    print(f'The longest palindromic substring of {s} is',
            findLongestPalindromicSubstring(s))