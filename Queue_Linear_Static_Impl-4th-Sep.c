#include <stdio.h>
#define MAX 5

int queue[MAX];
int front =-1;
int rear =-1;
void enqueue(int value)
{
if (rear == MAX-1)
{
printf("Queue Overflow\n");
return;
}
if (front ==-1)
{
front = 0;
}
rear++;
queue[rear] = value;
printf("%d inserted into queue\n", value);
}
void dequeue()
{
if (front ==-1 || front > rear)
{
printf("Queue Underflow\n");
return;
}
printf("%d deleted from queue\n", queue[front]);
front++;
if (front > rear)
{
front =-1;
rear =-1;
}
}
void peek()
{
if (front ==-1)
{
printf("Queue is empty\n");

return;
}
printf("Front element = %d\n", queue[front]);
}
void display()
{
int i;
if (front ==-1)
{
printf("Queue is empty\n");
return;
}
printf("Queue elements: ");
for (i = front; i <= rear; i++)
{
printf("%d ", queue[i]);
}
printf("\n");
}
int main()
{
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
display();
dequeue();
display();
peek();
return 0;
}
