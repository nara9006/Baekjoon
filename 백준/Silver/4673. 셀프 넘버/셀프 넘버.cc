#include <iostream>
using namespace std;
int d(int n){
    int s = n; 
    while(n > 0)
    {
        s += n % 10; 
        n /= 10; 
    }
    return s;
}
int main()
{
    bool check[10001] = {false,};
    for(int i = 1; i < 10001; i++)
    {    
        int n = d(i);
        if (n < 10001)
        {
            check[n] = true;
        }
    }
    for(int i = 1; i < 10001; i++)
    {
        if(!check[i]) cout << i << "\n";
    }
    return 0; 
}
