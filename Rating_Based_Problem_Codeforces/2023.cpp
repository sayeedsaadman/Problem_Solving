#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x,mul = 1;
        for (int i = 0; i <n; i++)
        {
            cin>>x;
            mul*=x;
        }
        if((2023%mul)==0)
        {
            cout<<"YES"<<endl;
            cout << 2023 /mul << " ";
            for(int i=1;i<k;i++)
            {
                cout<<1<< " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
}