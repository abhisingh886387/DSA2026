// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   
    int poly[10];
    int degree;
     printf("Enter the degree of polynomial \n");
     scanf("%d",&degree);
     printf("Enter the coefficients:\n");
     for(int i=0;i<=degree;i++)
     {
        printf("Coefficient of x^%d:",i);
        scanf("%d",&poly[i]);
     }

     printf("\n Polynomial is :");
     for(int i=degree;i>=0;i--)
     {
        if(poly[i]!=0)
        {
            if(i==0)
            {
                printf("%d",poly[i]);
            }
            else if(i==1)
            {
                printf("%dx",poly[i]);
            }
            else
            {
                printf("%dx^%d",poly[i],i);
            }
            if(i!=0)
            {
                printf(" + ");
            }
        }
     }

    return 0;
}
