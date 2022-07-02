#include<stdio.h>
#include "Queue.c"

int main()
{
    Queue q;
    int x,choice;
    initq(&q);
   
    while(1)
    {
        printf("0-Exit\t1-Enqueue\t2-Dequeue\nEnter Choice");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("Enter a number to enqueue\n");
        scanf("%d",&x);
            enqueue(&q,x);                                      
            break;
        case 2:
            x=dequeue(&q);
            printf("%d\n",x);
            break;
        case 0:
            return 0;
        default:
        printf("Wrong Choice");
        }
    }
    return 0;
        }