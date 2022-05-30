#include <iostream>
using namespace std;

int main()
{
    int N;
    int sum = 0;
    string s;   
    cin >> N;
    cin.ignore();
    getline(cin, s);
    for(int i = 0; i < N; i++)
    {    
        sum += s[i] - '0';
    }
    cout <<sum <<endl;
    return 0;
}