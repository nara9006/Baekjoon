#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    n1 = n1/100 + (n1/10)%10*10 + (n1%10)*100;
    n2 = n2/100 + (n2/10)%10*10 + (n2%10)*100;
    
    if (n1 >= n2) cout << n1;
    else cout << n2;
    return 0;
}
