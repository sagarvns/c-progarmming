#include<stdio.h>
#define max 5
int q[max],front=-1,rear=-1;
void enqueue();
void dequeue();
void disp();
int main()
{
    int ch;
    printf("\n 1.Enqueue Or Insert");
    printf("\n 2.Dequeue or Delete");
    printf("\n 3.Display");
    printf("\n 4.Exit");
    while(1)
    {
        printf("\nEnter Choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            disp();
            break;
        case 4:
            exit(0);
        default:
        printf("Wrong Choice");
        }
    }
}
void enqueue(){
    int data;
    if (rear == max-1)
    {
        printf("Overflow");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("Enter Element:");
        scanf("%d",&data);
        rear++;
        q[rear]=data;
    }     
}
void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("\nUnderFlow");
    }
    else
    {
        printf("\nDequeued: %d",q[front]);
        front++;
    }
}
void disp()
{
    int i;
    if(front==-1)
    {
        printf("\nQueue Is Empty");
    }
    else
    {
        printf("Element:");
        for(i=front;i<=rear; i++)
        {
            printf("\n%d",q[i]);
        }
    }
    
}