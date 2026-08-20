
#include <stdio.h>

int main()
{
    printf("Delcare the size of Matrix :- \n");
    int row,col,i,j;
    int count=0;
    int size;
    scanf("%d",&size);
    printf("Enter the value of rows:- \n");
    scanf("%d",&row);
    printf("Enter the value of cols:- \n");
    scanf("%d",&col);
    int matrix[row][col];
    printf("Enter the elemnts in Matrix :- \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
            
            if(matrix[i][j]!=0)
            {
                count++;
            }

        }
    }
    printf("print the elemnts in Matrix :- \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("The value at %d %d is :- %d \n",i,j,matrix[i][j]);

        }
    }
    
    
    if(count<(row*col)/2)
    {
        printf("This Sparse matrix \n");
    }
    else
    {
        printf("This normal 2D matrix \n");
    }
    
    return 0;
}
