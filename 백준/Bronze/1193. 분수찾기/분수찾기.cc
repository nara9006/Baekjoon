#include <iostream>
using namespace std;
int main()
{
    int X;
    int n = 0;
    cin >> X;
    while(1)
    {
        if((n*(n+1)/2 < X )&&( (n+1)*(n+2)/2 >= X)) break;
        n++;
    }
    if(n%2 != 0) cout << X-n*(n+1)/2 <<"/" << (n+2) - (X-n*(n+1)/2);
    else cout <<(n+2) - (X-n*(n+1)/2)<< "/" << X-n*(n+1)/2;
  
    return 0;
}