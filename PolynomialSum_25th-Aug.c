// Online C compiler to run C program online
#include <stdio.h>
void DisplayPolynomial(int P[100],int degree)
{
    printf("Printing the Expression 1:--->> \n");
   for(int i=degree;i>=0;i--)
   {
    if(P[i]!=0)
    {
        if(i==0)
        {
            printf("%d",P[i]);
        }

        else if(i==1)
        {
            printf("%dx",P[i]);
        }
        else
        {
            printf("%dx^%d",P[i],i);
        }
        if(i!=0)
        {
            printf(" + ");
        }
    }
   }
}

void addTwoPoly(int P1[],int P2[],int P3 [],int MaxDegree)
{
    for(int i=0;i<=MaxDegree;i++)
    {
        P3[i]=P1[i]+P2[i];
    }
}


void InputPolynomial(int arr[],int degree)
{
      
   for(int i=0;i<=degree;i++)
   {
    printf("Enter the cofficient of Polynomial X^%d : ",i);
    scanf("%d",&arr[i]);
   }
}

int main() {
   int P1[100]={0};
   int P2[100]={0};
   int P3[100]={0};
   int degree1,degree2,maxDegree;
   printf("\nTake the Degree input for Expression 1 \n");
   scanf("%d",&degree1);
   InputPolynomial(P1,degree1);
   DisplayPolynomial(P1,degree1);

   printf("\nTake the Degree input for Expression 2 \n");
   scanf("%d",&degree2);
   InputPolynomial(P2,degree2);
   DisplayPolynomial(P2,degree2);
   
   maxDegree=(degree1>degree2)? degree1:degree2;

   printf("\nSum of two polynomial is :-- >>");
   addTwoPoly(P1,P2,P3,maxDegree);
   printf("\n");
   DisplayPolynomial(P3,maxDegree);

return 0;
}
