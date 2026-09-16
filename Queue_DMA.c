
#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int *arr;
    int front;
    int rear;
    int capacity;
};

void initQueue(struct Queue *q, int capacity) {
    q->arr = malloc(capacity * sizeof(int));

    if (q->arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    q->front = 0;
    q->rear = -1;
    q->capacity = capacity;
}

void enqueue(struct Queue *q, int value) {
    if (q->rear == q->capacity - 1) {
        printf("Queue is full.\n");
        return;
    }

    q->arr[++q->rear] = value;
    printf("%d inserted.\n", value);
}

void dequeue(struct Queue *q) {
    if (q->front > q->rear) {
        printf("Queue is empty.\n");
        return;
    }

    printf("%d deleted.\n", q->arr[q->front++]);
}

void display(struct Queue *q) {
    if (q->front > q->rear) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");

    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }

    printf("\n");
}

int main() {
    struct Queue q;

    initQueue(&q, 5);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    display(&q);

    dequeue(&q);

    display(&q);

    free(q.arr);

    return 0;
}
