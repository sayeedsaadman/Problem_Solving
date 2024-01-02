#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;  
    while(t--){
        int n;
        cin>>n;
        int arr[n+10];
   for (int i = 1; i <= n; i++)
   {
     cin>>arr[i];
   }
   bool good = false;
   for (int i = 1; i <= n; i++)
   {
     if(arr[i]<=i)
     {
        good = true;
     }
     
   }
   if(good)
   {
    cout<<"YES"<<endl;
   }else
   cout<<"NO"<<endl;
    }
   
}