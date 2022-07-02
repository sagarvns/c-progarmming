#include<stdio.h>
void main()
{
    int a[]={1,2,44,5,7,9,1,2,3};
    int i;
    int n=sizeof(a)/sizeof(int);
    int max=a[0];
    for(i=0;i<=n-1;i++)

        if(a[i] >  max)
        {
            max=a[i];
        }

        //printf("max=%d",max);
    }
     printf("max=%d",max);
    
}