#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dbl;

//shortcut
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl
#define minus_one cout << -1 << endl
#define nl cout<<endl

// Loop 
#define FOR0(i,n) for(int i = 0; i < n; i++) // 0 based indexing
#define FOR1(i,n) for(int i = 1; i <=n; i++) // 1 based indexing

void solve() {
        int arr[26] ={};  
        int n,x;
        cin >> n;
        string ans = "";
        FOR0(i,n){
            cin >> x;
            FOR0(j,26){
                if (arr[j] == x){
                    ans += char(j + 'a');
                    arr[j]++;
                    break;
                }
            }
        }
        cout << ans <<endl;
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    
}

