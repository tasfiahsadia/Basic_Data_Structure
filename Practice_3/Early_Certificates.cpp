#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        int min_length = min(n, m);
        for (int i=0; i<min_length; i++)
        {
            if (s[i] == t[i]) 
                cout << s[i];
            else
                break;
        }
        cout << endl;
    }
}
