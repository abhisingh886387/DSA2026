#include <stdio.h>

#define MAX 100

int main()
{
    int arr[MAX];
    int n, choice;
    int i, position, value;
    int sum, max, min;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n========== ARRAY OPERATIONS ==========\n");
        printf("1. Display Array\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at Position\n");
        printf("4. Insert at End\n");
        printf("5. Delete from Beginning\n");
        printf("6. Delete from Position\n");
        printf("7. Delete from End\n");
        printf("8. Search Element\n");
        printf("9. Update Element\n");
        printf("10. Find Maximum\n");
        printf("11. Find Minimum\n");
        printf("12. Sum of Elements\n");
        printf("13. Average of Elements\n");
        printf("14. Reverse Array\n");
        printf("15. Sort Ascending\n");
        printf("16. Sort Descending\n");
        printf("17. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            /* 1. DISPLAY */
            case 1:
                printf("\nArray elements are:\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }

                printf("\n");
                break;


            /* 2. INSERT AT BEGINNING */
            case 2:
                if (n == MAX)
                {
                    printf("Array is full!\n");
                    break;
                }

                printf("Enter value: ");
                scanf("%d", &value);

                /* Shift elements to right */
                for (i = n; i > 0; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[0] = value;
                n++;

                printf("Element inserted successfully.\n");
                break;


            /* 3. INSERT AT POSITION */
            case 3:
                if (n == MAX)
                {
                    printf("Array is full!\n");
                    break;
                }

                printf("Enter position (1 to %d): ", n + 1);
                scanf("%d", &position);

                if (position < 1 || position > n + 1)
                {
                    printf("Invalid position!\n");
                    break;
                }

                printf("Enter value: ");
                scanf("%d", &value);

                /*
                   Convert position to array index.

                   Example:
                   Position 1 -> Index 0
                   Position 2 -> Index 1
                */

                for (i = n; i >= position; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[position - 1] = value;
                n++;

                printf("Element inserted successfully.\n");
                break;


            /* 4. INSERT AT END */
            case 4:
                if (n == MAX)
                {
                    printf("Array is full!\n");
                    break;
                }

                printf("Enter value: ");
                scanf("%d", &value);

                arr[n] = value;
                n++;

                printf("Element inserted successfully.\n");
                break;


            /* 5. DELETE FROM BEGINNING */
            case 5:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                /* Shift elements to left */
                for (i = 0; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                printf("First element deleted successfully.\n");
                break;


            /* 6. DELETE FROM POSITION */
            case 6:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                printf("Enter position (1 to %d): ", n);
                scanf("%d", &position);

                if (position < 1 || position > n)
                {
                    printf("Invalid position!\n");
                    break;
                }

                for (i = position - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                printf("Element deleted successfully.\n");
                break;


            /* 7. DELETE FROM END */
            case 7:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                n--;

                printf("Last element deleted successfully.\n");
                break;


            /* 8. SEARCH */
            case 8:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                printf("Enter element to search: ");
                scanf("%d", &value);

                position = -1;

                for (i = 0; i < n; i++)
                {
                    if (arr[i] == value)
                    {
                        position = i;
                        break;
                    }
                }

                if (position != -1)
                {
                    printf("Element found at position %d.\n",
                           position + 1);
                }
                else
                {
                    printf("Element not found.\n");
                }

                break;


            /* 9. UPDATE */
            case 9:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                printf("Enter position to update (1 to %d): ", n);
                scanf("%d", &position);

                if (position < 1 || position > n)
                {
                    printf("Invalid position!\n");
                    break;
                }

                printf("Enter new value: ");
                scanf("%d", &value);

                arr[position - 1] = value;

                printf("Element updated successfully.\n");
                break;


            /* 10. MAXIMUM */
            case 10:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                max = arr[0];

                for (i = 1; i < n; i++)
                {
                    if (arr[i] > max)
                    {
                        max = arr[i];
                    }
                }

                printf("Maximum element = %d\n", max);
                break;


            /* 11. MINIMUM */
            case 11:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                min = arr[0];

                for (i = 1; i < n; i++)
                {
                    if (arr[i] < min)
                    {
                        min = arr[i];
                    }
                }

                printf("Minimum element = %d\n", min);
                break;


            /* 12. SUM */
            case 12:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                sum = 0;

                for (i = 0; i < n; i++)
                {
                    sum = sum + arr[i];
                }

                printf("Sum = %d\n", sum);
                break;


            /* 13. AVERAGE */
            case 13:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                sum = 0;

                for (i = 0; i < n; i++)
                {
                    sum = sum + arr[i];
                }

                average = (float)sum / n;

                printf("Average = %.2f\n", average);
                break;


            /* 14. REVERSE */
            case 14:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                for (i = 0; i < n / 2; i++)
                {
                    int temp;

                    temp = arr[i];
                    arr[i] = arr[n - 1 - i];
                    arr[n - 1 - i] = temp;
                }

                printf("Array reversed successfully.\n");
                break;


            /* 15. SORT ASCENDING */
            case 15:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                for (i = 0; i < n - 1; i++)
                {
                    int j;

                    for (j = 0; j < n - i - 1; j++)
                    {
                        if (arr[j] > arr[j + 1])
                        {
                            int temp;

                            temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }

                printf("Array sorted in ascending order.\n");
                break;


            /* 16. SORT DESCENDING */
            case 16:
                if (n == 0)
                {
                    printf("Array is empty!\n");
                    break;
                }

                for (i = 0; i < n - 1; i++)
                {
                    int j;

                    for (j = 0; j < n - i - 1; j++)
                    {
                        if (arr[j] < arr[j + 1])
                        {
                            int temp;

                            temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }

                printf("Array sorted in descending order.\n");
                break;


            /* 17. EXIT */
            case 17:
                printf("Program terminated.\n");
                break;


            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 17);

    return 0;
}
