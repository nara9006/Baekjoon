//첫째 줄에 N과 X가 주어진다. (1 ≤ N, X ≤ 10,000)
//둘째 줄에 수열 A를 이루는 정수 N개가 주어진다. 
//X보다 작은 정수 출력
#include <iostream>
using namespace std;

int main()
{
    int N, X;
    int *A;
    cin >> N >> X;
    A = new int[N];
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }    
    for(int i = 0; i < N; i++)
    {
        if(A[i] < X) cout << A[i] <<" ";
    }    
    
    return 0;
}
