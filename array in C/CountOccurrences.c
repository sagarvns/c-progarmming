#include<stdio.h>
void main()
{   
    int a[]={1,2,3,3,2,1,3,2};
    int freq[10]={0};
    int n=sizeof(a)/sizeof(int);
    int count,i;
    for(i=0;i<=n-1;i++)
    {
       freq[a[i]]++;
       //freq[4]++
    }
for(i=0;i<=9;i++)
printf("%d found %d times\n",i,freq[i]);

}