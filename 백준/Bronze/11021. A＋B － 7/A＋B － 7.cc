#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,a,b;
    int *s;
    cin >> n;
    s = new int[n];
    for(int i = 1; i <= n; i++)
    {
       cin >> a >> b;
       s[i] = a+b;
    } 
    for(int i = 1; i <= n; i++)
    {
        cout << "Case #"<< i << ": "<< s[i] <<"\n";
    }
    return 0;
}