#include <iostream>
using namespace std;
int main()
{
    int N;
    int cnt = 0;
    string s;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> s;
        for(int j = 1; j < s.size(); j++)
        {
            if(s[j-1] != s[j] && s.find(s[j])<j) 
            {
                cnt++;
                break;
            }
        }
    }
    cout << N-cnt;    
    
    return 0;
}