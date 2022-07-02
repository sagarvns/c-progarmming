#include<stdio.h>
#include "stack.c"
int main()
{
 int i;
 Stack st;
 init(&st);
for(i=1;i<=10;i++)
push(&st,i);
while (!empty(st))
{
    printf("%d,",pop(&st));
}
    return 0;
}
