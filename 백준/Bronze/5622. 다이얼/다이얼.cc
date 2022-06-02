#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int t = 0;
    int second[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    for(int i = 0; i < s.size(); i++)
    {
        t += second[s[i]-'A'];
    }
    cout << t;
    return 0;
}