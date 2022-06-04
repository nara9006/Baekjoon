#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int T,k,n,p;
    int s[15] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int u[15] = {0,};
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> k >> n;
        
        for(int h = 1; h <= k; h++)
        {
            for(int j = 1; j <= n; j++) u[j] = 0;
            for(int j = 1; j <= n; j++)
            {
                for(int w = 1; w <= j; w++)
                {
                    //cout <<"u["<<j<<"] = "<<u[j]<<" ";
                    u[j] += s[w];
                    //cout << "u["<<j<<"] ="<<u[j]<<"w =  "<<w<<" s["<<w<<"] = " <<s[w]<<endl;
                }
                //cout <<"j = "<< j <<" u["<<j<<"] = " << u[j] << endl;
                
            }
            //cout << "\n";
           
              for(int j = 1; j <= n; j++)
            {
                s[j] = u[j];
               
            }
            
        }
        cout << u[n] << endl;
        for(int h = 0 ; h < 15; h++) 
        {
            s[h] = h;
            u[h] = 0;
        }
    }
    return 0;
}