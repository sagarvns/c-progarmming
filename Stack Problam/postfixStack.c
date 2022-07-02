#include<stdio.h>
#define size 10
typedef struct 
{
    int a[size];
    int top;
}Stack;
void init(Stack* st);
void push(Stack* st,int data);
int pop(Stack* st);
int empty(Stack st);
int main()
{
    Stack s;
    int x,choice;
    init(&s);
    while (1)
    {
        printf("\n0-Exit,1-Push,2-Pop\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            printf("Enter element\n");
            scanf("%d",&x);
            push(&s,x);
            break;
        case 2:
            x=pop(&s);
            printf("%d",x);
            break;
        
        default:
            break;
        }
    }
return 0;
}

void init(Stack* st)
{
    st->top=-1;
    //(*st).top=-1;
}
void push(Stack* st,int data)
{
    if(st->top>=size-1)
    {
        printf("\nStack is full\n");
        return;
    }
    st->top++;
    st->a[st->top]=data;
}
int pop(Stack* st)
{
    int t;
    if(st->top<0)
    {
        printf("\nStack is empty\n");
        return -1;
    }
   
    t=st->a[st->top];
     st->top--;
    
    return t;
}
int empty(Stack st)
{
    if(st.top<0)
    return 1;
    else
    return 0;
    
}