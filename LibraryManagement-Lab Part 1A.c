// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int n=0;
struct Book
{
    int bookid;
    char author[100];
    char title[100];
    float price;
    int avilable;
};

struct Book *book=NULL;

void create()
{
    
    printf("Enter the No of Books \n");
    int n;
    scanf("%d",&n);
printf("\n Enter the Book details \n");
    book=(struct Book*)malloc(n*sizeof(struct Book*));
    for(int i=0;i<n;i++)
    {
        if(book==NULL)
        {
            printf("\n Memory Allocation failed\n");
            return;
        }
        else
        {
        printf("Enter the book id for Book Num %d:--> \n",i+1);
        scanf("%d",&book[i].bookid);
        printf("Enter the price book :--> \n");
        scanf("%f",&book[i].price);



        printf("Enter the book title:--> \n");
        scanf("%s",&book[i].title);
         printf("Enter the book Author :--> \n");
        scanf("%s",&book[i].author);
        book[i].avilable=1;
        }
    }
    printf("\n <<<<======= Book record is registred successfully :=======>>>");
}

void display()
{
     if(book==NULL)
    {
        printf("\n ---->>>>> No Book Data Find ----->>>>> \n");
        return;
    }
    for(int i=0;i<n;i++)
    {
        printf("The book id is :- %d ",book[i].bookid);
        printf("The book title is :- %s ",book[i].title);
        printf("The book author is :- %s ",book[i].author);
        printf("The book price is :- %f ",book[i].price);

        if(book[i].avilable==1)
        {
            printf("Book Status : Avilable \n ");
        }
        else
        {
            printf("Book Status : Issued \n ");
        }        
    }
}

int main() {
     int i=0;
    do
    {
    printf("\n Press 1 for Regisration of books :\n");
     printf("\n Press 2 for Display the book details :\n");
      printf("\n Press 3 Exit :\n");
     printf("\n Enter the choice :\n");
    
     int choice;
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
        create();
        break;
        case 2:
        display();
        break;

        case 3:
        free(book);
        printf("You sucessfully terminated the program \n");
        break;
        default:
        printf("Invalid otption choosen\n");
     }
     i++;
    }while(i!=3);

    return 0;
}
