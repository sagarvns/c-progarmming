#include<stdio.h>
void main()
{
    int a[]={2,34,4,5,6,32};
    int n=sizeof(a)/sizeof(int);
    int max1=a[0],max2=a[1];
    int i;
    if(max1<max2)
    {
        max1=a[1];
        max2=a[0];
    }
    for(i=2;i<=n-1;i++)
    {
    int value=a[i];
    if(value<max2)
    continue;
    if(value>=max1)
    {
        max2=max1;
        max1=value;
        continue;
    }
    max2=value;
    }
    printf("%d,%d",max1,max2);

}