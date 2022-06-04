#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int bang, input;
    cin>>input;
    while(1)
    {
        if(input == 1) 
        {
            bang=1;
            break;
        }
        if(input > 3*n*n+3*n+1 && input <= 3*(n+1)*(n+1) +3*(n+1)+1)
        {
            bang = n+2;
            break;
        }
        else n++;
    }
    cout << bang;
    return 0;
}