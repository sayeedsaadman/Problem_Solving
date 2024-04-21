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
#define Taratari()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void print(int n)
{
    if (n == 1)
        cout << "##";
    else
        cout << "..";
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i / 2 + j) % 2 == 0)
            {
                print(1);
            }
            else
                print(0);
        }
        cout << endl;
    }
}

int main()
{
    Taratari();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
}
