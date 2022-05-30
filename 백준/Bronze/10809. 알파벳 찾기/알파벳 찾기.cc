#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string input;
    cin>> input;
    for(int i; i<alpha.size(); i++)
    {
        cout << (int)input.find(alpha[i])<< " ";
    }
    
    return 0;
}