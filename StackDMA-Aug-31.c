/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int *arr;
    int capacity;
    int top;
};

void InitalizeStack(struct stack *s,int capacity)
{
    s->arr=(int *)malloc(capacity*sizeof(int));
    if(s->arr==NULL)
    {
        printf("Memory Allocation failed\n");
        exit(1);
    }
    s->top=-1;
    s->capacity=capacity;
}

void push(struct stack *s,int value,int capacity)
{
    if(s->top==s->capacity-1)
    {
s->capacity=2*capacity;

       s->arr=(int *)realloc(s->arr,sizeof(int));
       if(s->arr==NULL)
       {
           printf("Memory Allocation Failed:\n");
       }
       printf("Your resized your stack with %d:-> ",s->capacity);
    }
    s->top++;
    s->arr[s->top]=value;
}

void display(struct stack *s,int capacity)
{
    if(s->top==-1)
    {
        printf("Stack is under flown :-- \n");
    }
    else
    {
        for(int i=s->capacity-1;i>=0;i--)
        {
            printf("Your pushed value is %d at %d index -> ",s->arr[i],i);
        }
    }
}

int main()
{
    push(10);

    return 0;
}
