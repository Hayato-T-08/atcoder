#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }

    int hmin=1000,hmax=-1,wmin=1000,wmax=-1;
    for (int i = 0; i < h; i++)
    {

        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == '#')
            {

                hmin=min(hmin,i);
                hmax=max(hmax,i);
                wmin=min(wmin, j);
                wmax=max(wmax,j);
            }
        }

    }



    bool ans = true;

    for (int i = hmin; i <= hmax; i++)
    {
        for (int j = wmin; j <= wmax; j++)
        {
            if (s[i][j] == '.')
            {
                ans = false;
                break;
            }
        }
    }

    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}