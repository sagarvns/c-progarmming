#include<stdio.h>
void main()
{
    int a[]={7,2,3,4,5};
    int b[]={6,7,8,9,3};
    int n1=sizeof(a)/sizeof(int);
    int n2=sizeof(b)/sizeof(int);
    int i,j;
    for(i=0;i<=n1-1;i++){
        for (j=0;j<=n2-1;j++){
            if(a[i]==b[j])              
            {
            printf("%d %d",a[i],b[j]);
            }
        }    
    }

}