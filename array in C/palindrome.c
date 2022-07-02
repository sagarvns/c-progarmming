#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,5,4,3,2};
    int n=sizeof(a)/sizeof(int);
    int i;
    for(i=0;i<=n-1;i++){
        if (a[i]!=a[n-i-1])
        {
            printf("Not Pandulam");
        }
        else
        {
            printf("Pandulam");
        }
        return 0;
    }
        
}