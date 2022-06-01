#include <iostream>
using namespace std;
int main()
{
    int t_case;
    cin >> t_case;
    string s;
    int N;
    for(int i = 0; i < t_case; i++)
    {
        s = "";
        cin >> N;
        cin >> s;
        for(int k = 0; k < s.size(); k++) 
        {
            for(int j = 0; j < N; j++)  cout << s[k]; 
        }
        cout <<"\n";
    }
    
}