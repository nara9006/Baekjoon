#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;

    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == 'c' || s[i] == 's' || s[i] == 'z')
        {
            if(s[i+1] == '=') cnt++;
        }
        if(s[i] == 'c'|| s[i] == 'd') 
        {
            if(s[i+1] == '-') cnt++;
        }
        if(s[i] == 'l' && s[i+1] == 'j') cnt++;
        if(s[i] == 'n' && s[i+1] == 'j') cnt++;
        if(i>=1)
        {
            if(s[i-1] == 'd' && s[i] == 'z' && s[i+1] =='=') cnt++;
        }
    }   
    
    cout << s.size() - cnt;
        
    
    return 0;
}