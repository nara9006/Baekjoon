#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int m[42] = {0,};
    int n = 0;
    
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
        m[(a[i] % 42)]++;
    }
    for(int i = 0; i < 42; i++)
    {
        if(m[i] != 0) n++;
    }

    cout << n;
    return 0;
}