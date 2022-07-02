#define queuesize 10
typedef struct
{
    int data[queuesize];
    int back,front,count;
}Queue;
void initq(Queue* q);
void enqueue(Queue* q,int data);
int dequeue(Queue* q);
int qempty(Queue q);

void initq(Queue* q)
{
    q->back=0;
    q->front=0;
    q->count=0;
}
void enqueue(Queue* q,int data)
{
    if(q->count >= queuesize)
    {
        printf("Queue is full\n");
        return;
    }
    q->back=(q->back + 1) % queuesize;
    q->count++;
    q->data[q->back]=data;
}
int dequeue(Queue* q)
{
    if(q->count<=0)
    {
        printf("Queue is empty\n");
        return -1;
    }
    q->front =(q->front + 1) % queuesize;
    q->count--;
    return q->data[q->front];

}
int qempty(Queue q)
{
    if(q.count<=0)
    return 1;
    return 0;
}

