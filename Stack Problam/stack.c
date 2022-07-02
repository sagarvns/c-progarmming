
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