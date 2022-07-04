#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, count = 0;
        cin >> n;
        int arr[n][6];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] == 0 && arr[i][1] == 0 && arr[i][2] == 0 && arr[i][3] == 0 && arr[i][4] == 0 && arr[i][5] == 0)
            {
                count++;
            }
        }
        cout << "Case " << i << ": " << count << '\n';
    }
    return 0;
}