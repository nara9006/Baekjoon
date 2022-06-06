#include <stdio.h>
using namespace std;

int main()
{
    int H, M = 0;
    scanf("%d %d", &H, &M);
    if(M < 45) 
    {
      if(H == 0) printf("23 %d", M + 15);
      else printf("%d %d", H - 1, M + 15);
    }
    else printf("%d %d", H, M - 45);
    return 0;
}