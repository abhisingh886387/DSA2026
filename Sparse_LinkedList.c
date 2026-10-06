Implementation of Sparse Matrix using LINKED LIST
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int row;
    int col;
    int value;
    struct Node *next;
};

struct Node *head = NULL;


Check whether matrix is sparse 

int isSparse(int matrix[][10], int rows, int cols)
{
    int zero = 0;
    int nonZero = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                zero++;
            }
            else
            {
                nonZero++;
            }
        }
    }

    printf("\nZero elements = %d", zero);
    printf("\nNon-zero elements = %d\n", nonZero);

    if (zero > nonZero)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


			Insert non-zero element into linked list 
void insert(int row, int col, int value)
{
    struct Node *newNode;
    struct Node *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->row = row;
    newNode->col = col;
    newNode->value = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}


Display sparse matrix 
void display()
{
    struct Node *temp;

    temp = head;

    printf("\nRow\tColumn\tValue\n");

    while (temp != NULL)
    {
        printf("%d\t%d\t%d\n",
               temp->row,
               temp->col,
               temp->value);

        temp = temp->next;
    }
}


Main function
int main()
{
    int matrix[10][10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter matrix elements:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

Check whether matrix is sparse
    if (isSparse(matrix, rows, cols))
    {
        printf("\nMatrix is Sparse.\n");

        /* Store only non-zero elements */
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] != 0)
                {
                    insert(i, j, matrix[i][j]);
                }
            }
        }

        Display linked list
        display();
    }
    else
    {
        printf("\nMatrix is NOT Sparse.\n");
    }

    return 0;
}
