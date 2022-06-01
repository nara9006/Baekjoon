#include<iostream>
using namespace std;
int main()
{
    bool flag = false;
    string s;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int cnt[alpha.size()] = {0,};
    int max_idx, max_val = 0;
    cin >>s;
    for(int i = 0; i < alpha.size(); i++)
    {
        for(int j = 0; j < s.size(); j++)
        {
            s[j] = toupper(s[j]);
            if(alpha[i]==s[j]) cnt[i]++;
        }
    }
    for(int i = 0; i < alpha.size(); i++)
    {
        if(cnt[i] > max_val) 
        {
            max_val = cnt[i];
            max_idx = i;
            flag = false;
        }    
        else if (cnt[i]== max_val) flag=true;
    }
    if(flag) cout << "?";
    else cout << alpha[max_idx];
    
    return 0;
}
