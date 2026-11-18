#include <stdlib.h> // malloc, free

struct Node
{
    int data;
    struct Node *next;
};

struct Queue
{
    struct Node *front;  // 队头指针
    struct Node *rear;   // 队尾指针
};

// 初始化队列
struct Queue *init_queue()
{
    struct Queue* p=(struct Queue *)malloc(sizeof(struct Queue));
    p->front=NULL;
    p->rear=NULL;
    return p;
}

// 入队
void enqueue(struct Queue *q, int value)
{
    struct Node* p=(struct Node *)malloc(sizeof(struct Node));
    p->data=value;
    p->next=NULL;
    p->next = NULL;
    if (q->rear == NULL) 
    {
        q->front = p;
        q->rear = p;
    }
    else
    {
        q->rear->next = p;
        q->rear = p;
    }
    

    
}

// 出队（由于队伍可能为空，这里用返回值表示是否成功）
int dequeue(struct Queue *q, int *value)
{
    if (q->front == NULL) return 0;
    struct Node *p = q->front;
    *value = p->data;
    q->front = p->next;
    if (q->front == NULL) q->rear = NULL;
    free(p);
    return 1;
}