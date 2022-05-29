#include <iostream>
using namespace std;

int main()
{
    int N;
    int cnt = 0;
    cin >> N;
    int a[3] = {0,}; 
    if(N < 100)
    {
        cnt = N;
    }
    else
    {
        if(N == 1000) N--;
        cnt = 99;
        for(int i = 100; i <= N; i++)
        {
            a[0] = i%10;
            a[1] = (i%100)/10;
            a[2] = (i%1000)/100;
            if(a[2] + a[0] == 2*a[1]) cnt ++;
        }
    }
    cout << cnt;
    return 0;
}