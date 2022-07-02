#include<stdio.h>
struct mystruct
{
    int i;
    float f;
}st1,st2;
int main()
{
 printf("Enter int and float\n");
 scanf("%d%f",&st1.i,&st1.f);
 printf("Int=%d,Float=%f\n",st1.i,st1.f);
    return 0;
}