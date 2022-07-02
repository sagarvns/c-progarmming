#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,5,4,5,2};
    int b[]={1,2,3,4,9,8,7,5,6};
    int n1=sizeof(a)/sizeof(int);
    int i;
   for ( i = 0; i <= n1-1; i++)  
       {
          if(a[i]!=b[i]){
             printf("not equal\n");
            }
          else{
            printf("Equal \n");
            }
       }    
}
   