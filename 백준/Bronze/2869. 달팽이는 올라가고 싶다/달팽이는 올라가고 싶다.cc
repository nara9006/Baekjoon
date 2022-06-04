#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int V,A,B,n=1;
    scanf("%d %d %d",&A,&B,&V);
    n = (V-B)/(A-B);
    if((V-B)%(A-B)==0)  printf("%d",n);
    else  printf("%d",n+1);
  
    return 0;   
}