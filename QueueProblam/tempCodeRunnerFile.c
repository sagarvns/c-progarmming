#include<stdio.h>
#include "Queue.c"

int main()
{
    Queue q;
    int i;
    initq(&q);
    for(i=1;i<=5;i++)
    enqueue(&q,i);

    while (!qempty(q))
    {
       // printf("%d,",dequeue(&q));
        printf("\nEnter Choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 0:
        printf("Wrong Choice");
        case 1:
            void enqueue(Queue q,int data);
            break;
        case 2:
            int dequeue(Queue q);
            break;
        case 3:
            int qempty(Queue q);
            break;
            default:
        }
    }

    return 0;
}