#include<stdio.h>
#include "stack.c"
int main()
{
    Stack st;
    int a[]={1,2,2,1};
    int n=sizeof(a)/sizeof(int);
    int i,x;
    init((&st));
    for(i=0;i<=n-1;i++)
    {
        push(&st,a[i]);
    }
    i=0;
    while (!empty(st))
    {
        x= pop(&st);
        if(a[i]!=x)
        {
            printf("Not palindrome");
            return 0;
        }
        i++;
    }
    printf("Palindrome");
    


return 0;
}
