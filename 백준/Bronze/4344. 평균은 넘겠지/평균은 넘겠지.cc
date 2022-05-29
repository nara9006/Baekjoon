#include <iostream>
using namespace std;
int main()
{
    double N, M;
    cin >> N;
    double cnt = 0;
    double sum = 0;
    double score[1000] = {0,};
 
    for(int i = 0; i< N; i++)
    {
        cin >> M;
        sum = 0;
        cnt = 0;
        for(int j = 0 ; j < M; j++) 
        {
            cin >> score[j];
            sum += score[j]; 
        }
       for(int k = 0; k < M; k++) 
       {
         if(score[k]>(sum/M))
         {
              cnt ++;
         }
       }

       cout.precision(3);
       cout<<fixed;
       cnt = cnt/M*100;
       cout << (double)cnt<<"%\n"; 
    }
    
    return 0;
}