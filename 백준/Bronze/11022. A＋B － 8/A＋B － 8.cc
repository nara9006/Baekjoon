#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    int *a, *b;
    cin >> n;
    a = new int[n];
    b = new int[n];
    for(int i = 1; i <= n; i++)
    {
       cin >> a[i] >> b[i];
    } 
    for(int i = 1; i <= n; i++)
    {
        cout << "Case #"<< i << ": "<<a[i]<< " + "<<b[i] << " = "<< a[i] + b[i] <<"\n";
    }
    return 0;
}