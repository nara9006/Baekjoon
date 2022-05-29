#include <iostream>
using namespace std;
int main()
{
    int t, a, b;
    int *s;
    cin >> t;
    s = new int[t];
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        s[i] = a+b;
    }
    for(int i = 0; i<t; i++) cout << s[i] <<endl;
    return 0;
}