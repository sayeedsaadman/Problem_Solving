#include <iostream>
using namespace std;
int main() 
{
    int x;
    cin >> x;
    if (x % 2 == 0 || x % 3 == 0) 
    {
        cout << "Yes" << endl;
    } 
    else 
    {
        cout << "No" << endl;
    }
    return 0;
}
