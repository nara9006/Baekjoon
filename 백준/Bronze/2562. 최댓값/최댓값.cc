#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int max = 0;
    int max_i = 0;
    int a[9];
    for(int i = 0; i < 9; i++)
    {
        cin >> a[i];
        if(a[i] > max) 
        {
            max = a[i];
            max_i = i;
        }
    }
    cout << max <<"\n";
    cout << max_i+1;
    return 0;
}