#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int five_b = N/5;
    while(N-five_b*5 >= 0)
    {
        if((N-five_b*5)%3 == 0) 
        {
            cout << five_b + (N-five_b*5)/3<<endl; 
            return 0;
        }
        else 
        {
            if(five_b > 0) five_b--;
            else break;
        }
    }
    if(N % 3 == 0) cout<< N/3<<endl;
    else cout << "-1\n";
}

