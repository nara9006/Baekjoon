//A가 B보다 큰 경우에는 '>'를 출력한다.
//A가 B보다 작은 경우에는 '<'를 출력한다.
//A와 B가 같은 경우에는 '=='를 출력한다.
#include <stdio.h>
using namespace std;

int main()
{
    int A,B = 0;
    scanf("%d %d", &A, &B);
    if(A > B) printf(">");
    else if(A < B) printf("<");
    else printf("==");
    return 0;
}