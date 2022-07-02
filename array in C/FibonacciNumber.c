#include<stdio.h>
void main()
{   
    int n1=0,n2=1,n3,c;
    int i;
    printf("Enter the number");
    scanf("%d",&c);
    printf("%d,%d,",n1,n2);
    for(i=2;i<=c-1;i++)
    {
    n3=n1+n2;
    printf("%d,",n3);
    n1=n2;
    n2=n3;
    }
}
