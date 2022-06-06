#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int A = 0;
    char B[4];
    cin >> A;
    cin >> B;
    cout << A * (B[2] - '0') << endl;
    cout << A * (B[1] - '0') << endl;
    cout << A * (B[0] - '0') << endl;
    cout << A * atoi(B) << endl;
    
    return 0;
}