#include <stdio.h>
using namespace std;

int main()
{
    int score = 0;
    scanf("%d", &score);
    if (score >= 90) printf("A");
    else if ((score >=80) && (score < 90)) printf("B");
    else if ((score >=70) && (score < 80)) printf("C");
    else if ((score >=60) && (score < 70)) printf("D");
    else printf("F");
}