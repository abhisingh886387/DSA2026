#include <stdio.h>
#include<stdlib.h>

int main()
{
    printf("------>>>>>> Dynamic Memory Allocation:<<<<<<-------\n");
    
    
    printf("Enter the size of DMA array :-\n");
    int num;
    scanf("%d",&num);
    int* arr1=(int *)malloc(num*sizeof(int));
    
    printf("Insert the elements in an array :\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr1[i]);
        
    }
    
      printf("Print the elements from an array :\n");
    for(int i=0;i<num;i++)
    {
        printf("The element %d at the index num is :- %d \n",arr1[i],i);
        
    }
    
    
    

     printf("Enter the Resizesize of DMA array :-\n");
    
    scanf("%d",&num);
    arr1=(int*)realloc(arr1,num*sizeof(int));
    
     printf("Insert the elements in resized  array :\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr1[i]);
        
    }
    
      printf("Print the elements from resized array :\n");
    for(int i=0;i<num;i++)
    {
        printf("The element %d at the index num is  :- %d in resized array\n",arr1[i],i);
        
    }
    free(arr1);

    return 0;
}
