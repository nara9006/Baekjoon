#include <iostream>
using namespace std;
int main()
{
    int a,b,c,m;
    cin >> a >> b >> c;
    int n = 1;
    
    if(a == b)
    {    
        //a=b!=c
        n++;
        m = a;
        if(a == c) // a=b=c
        {
            n++;
        }
    }
    else
    {
        if(a == c) //a!=b, a=c
        {
            n++;
            m = a;
        }
        else
        {
            if(b == c) 
            {    
                n++;
                m = b;
            }
        }
    }      
    switch(n)
    {
        case 1 : 
        {
            if(a > b) 
            {
               if(a > c) m = a;
               else m = c;
            }
            else
            {
                if(b > c) m = b;
                else m = c;
            }
            cout << m*100;
            break;
        }
        case 2 :
        {
            cout << 1000 + m*100;
            break;
        }
        case 3 : 
        {
            cout << 10000 + m*1000;
            break;
        }
    }
    return 0;
}