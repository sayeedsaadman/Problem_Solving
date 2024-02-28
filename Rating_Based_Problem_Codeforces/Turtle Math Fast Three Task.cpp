#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dbl;

// shortcut
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl
#define minus_one cout << -1 << endl
#define nl cout << endl

// Loop
#define FOR0(i, n) for (int i = 0; i < n; i++)  // 0 based indexing
#define FOR1(i, n) for (int i = 1; i <= n; i++) // 1 based indexing

void solve()
{
    int n, sum = 0, cnt = 0;
    cin >> n;
    int arr[n+10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % 3 == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        if ((sum + 1) % 3 == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            int flag = 0;
            for (int i = 0; i < n; i++)
            {
                int temp = sum;
                temp = temp - arr[i];
                if (temp % 3 == 0)
                {
                    cout << "1" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "2" << endl;
            }
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
}
