// Switch program for queue
#include<stdio.h>
#define MAX 5
int que_arr[MAX];
int added_item;
int rear = -1;
int front = -1;
int main()
{
    push_all();
    disp();
    delete();
    return 0;
}

void disp()
{
    if(front == -1 || front > rear)
    {
        printf("\nQueue is empty");
    }
    else
    {
        int i;
        printf("\nElements are: ");
        for(i = front; i <= rear; ++i)
        {
            printf("%d,", que_arr[i]);
        }
    }
} 
void push_all()
{
    int i;
    {
    if (rear == (MAX)-1)
    {
        printf("queue is full");
    }
    else if (front == -1)
            front = 0;
        else
            {
                rear = rear+1;
            }
        for(i=0; i<MAX; i++)
        {
        printf("\nEnter the element: ");
        scanf("%d", &added_item);
        rear = rear + 1;
        que_arr[rear] = added_item;
        }
    }
}
void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty");
    }
    else
    {
        int i;
        printf("\nDeleted elements are: ");
        front = 0;
        for(i= front; i <= rear; i++)
            printf("\nDeleted element are %d,",que_arr[i]);
    }
}
