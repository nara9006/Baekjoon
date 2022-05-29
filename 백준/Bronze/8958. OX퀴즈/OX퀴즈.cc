#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int N = 0;
    int rev = 0;
    int *score;
    cin >> N;
    score = new int[N];
    
    for(int i = 0; i < N; i++)
    {
        cin >> s; 
        for(int j = 0; j < s.size(); j ++)
        {
            if(s[j] == 'O') 
            {
                rev++;
                score[i] += rev;
            }
            else
            {
                rev = 0;
            }
        }
        rev = 0;
        cout << score[i] << "\n";
    }
   
    return 0;
}