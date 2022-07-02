#include<stdio.h>
void main()
{
    int a[]={-2,4,5,2,6,7,9,-2,-4,3};
    int n=sizeof(a)/sizeof(int);
    int i;
    int postive[0];
    int negetive[0];
    for(i=0;i<n-1;i++){
    if(a[i]%2==0)
    {
        printf("%d is even\n",a[i]);
    }
    if(a[i] % 2!=0)
    {
        printf("%d is odd\n",a[i]);
    }
    if(a[i]>=0)
    {
        printf("%d is positive\n",a[i]);
    }
    if(a[i]<0)
    {
        printf("%d is negative\n",a[i]);
    }
    }
}