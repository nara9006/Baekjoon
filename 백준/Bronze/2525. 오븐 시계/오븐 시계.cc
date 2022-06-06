#include <iostream>
using namespace std;

int main()
{
   int h, m, t;
   cin >> h >> m;
   cin >> t;
   int h1, m1;
   h1 = (m+t)/60;
   m1 = (m+t) - h1*60;
   if(h + h1 >= 24) cout << h+h1 - 24 <<" "<< m1; 
   else cout << h+h1 <<" "<< m1;
   return 0; 
}