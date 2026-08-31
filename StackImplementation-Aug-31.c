#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int *arr;
    int top;
    int capacity;
};

void initialize(struct Stack *s, int capacity)
{
    s->arr = (int *)malloc(capacity * sizeof(int));

    if (s->arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    s->top = -1;
    s->capacity = capacity;
}

void push(struct Stack *s, int value)
{
    // Stack is full
    if (s->top == s->capacity - 1)
    {
        s->capacity = s->capacity * 2;

        s->arr = (int *)realloc(
            s->arr,
            s->capacity * sizeof(int)
        );

        if (s->arr == NULL)
        {
            printf("Memory reallocation failed\n");
            exit(1);
        }

        printf("Stack resized to %d\n", s->capacity);
    }

    s->top++;
    s->arr[s->top] = value;
}

void pop(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Popped: %d\n", s->arr[s->top]);

    s->top--;
}

void peek(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top: %d\n", s->arr[s->top]);
}

void display(struct Stack *s)
{
    int i;

    if (s->top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack:\n");

    for (i = s->top; i >= 0; i--)
    {
        printf("%d\n", s->arr[i]);
    }
}

void destroy(struct Stack *s)
{
    free(s->arr);
    s->arr = NULL;
    s->top = -1;
    s->capacity = 0;
}

int main()
{
    struct Stack s;

    initialize(&s, 2);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);

    display();

    peek(&s);

    pop(&s);

    display();

    destroy(&s);

    return 0;
}
