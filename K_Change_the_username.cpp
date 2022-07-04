#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        map<string, string> m;
        set<string> unused;
        set<string> used;
        while (n--)
        {
            int t;
            cin >> t;
            if (t == 1)//operation 1 or 2
            {
                string s1, s2;
                cin >> s1 >> s2;
                auto isUsed = used.find(s2);
                if (isUsed == used.end())
                {
                    if (unused.find(s2) != unused.end())
                    {
                        unused.erase(s2);
                    }
                    if (used.find(s1) != used.end())
                    {
                        m[s2] = m[s1];
                        m[s1] = "";
                        used.erase(s1);
                    }
                    else
                    {
                        m[s2] = s1;
                    }
                    used.insert(s2);
                    unused.insert(s1);
                }
                else
                {
                    if (m[s1] == "")
                    {
                        m[s1] = s1;
                        used.insert(s1);
                    }
                }
            }
            else
            {
                string s;
                cin >> s;
                if (unused.find(s) != unused.end())
                {
                    cout << "Not in use!" << '\n';
                }
                else if (used.find(s) != used.end())
                {
                    cout << m[s] << '\n';
                }
                else
                {
                    used.insert(s);
                    m[s] = s;
                    cout << s << '\n';
                }
            }
        }
    }
    return 0;
}