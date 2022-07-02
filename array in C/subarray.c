#include<stdio.h>
void main()
{
    int a[]={2,4,3,1,6,5,7,8};
    int b[]={1,6,5};
    int i;
    int n1=sizeof(a)/sizeof(int);
    int n2=sizeof(b)/sizeof(int);
    for(i=0;i<=n1-n2;i++)
    {
            if(a[i]==b[0])
            {
                int count=0;
                for( int j=0;j<=n2-1;j++){  
                    
                    if(b[j]==a[i+j]) 
                    {    
                        count=count+1; 

                    printf("%d,",a[i+j]); 
                    } 
                    else 
                    break;
                } 
                if(count==n2)  {
                    printf("Found");
                }           
            }           
    }
}