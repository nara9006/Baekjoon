#include <iostream>
using namespace std;

int main()
{
    int a,b,c,m;
    int n_cnt[10] = {};
    cin >> a >> b >> c;
    m = a*b*c;
    while(m != 0)
    {
        n_cnt[m % 10] ++;
        m/=10;
    }
    for(int i : n_cnt) cout << i << "\n";
    return 0;
}