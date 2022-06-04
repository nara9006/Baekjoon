#include <iostream>
using namespace std;
int main()
{
    int a,b,c,n = 0;
    cin >> a >> b >> c;
    
    if(b>=c) 
    {
        n = -1;
    }
    else
    {
        n = a/(c-b)+1;
    }
    cout << n;
    return 0;
}
