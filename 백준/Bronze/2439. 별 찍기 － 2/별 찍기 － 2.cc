#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
       for(int k = 0; k < n-i; k++) cout << " ";
       for(int j = 0; j < i; j++) cout << "*";
       cout << "\n";
    }
    return 0;
}