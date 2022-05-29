#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    double  m, sum = 0;
    double *s;
    cin >> N;
    s = new double[N];
    for(int i = 0; i < N; i++)
    {
       cin >> s[i];
       sum += s[i];
    }
    sort(s, s+N);
    m = s[N-1];
    cout.fixed;
    cout.precision(6);
    cout << (double)(sum/m*100/N);

    
    return 0;
}