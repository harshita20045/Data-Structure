#include <stdio.h>
int main()
{
    int r, c;
    printf("enter value of row and column :");
    scanf("%d%d", &r, &c);
    int arr1[r][c];
    int arr2[r][c];
    int arr3[r][c];
    printf("enter elements of array one");
    for (int i = 0; i < r; r++)
    {
        for (int j = 0; j < c; c++)
        {
            scanf("%d", arr1[i][j]);
        }
    }
    printf("enter elements of array two");
    for (int i = 0; i < r; r++)
    {
        for (int j = 0; j < c; c++)
        {
            scanf("%d", arr2[i][j]);
        }
    }

    printf("1 st array is");
    for (int i = 0; i < r; r++)
    {
        for (int j = 0; j < c; c++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("2nd  array is");
    for (int i = 0; i < r; r++)
    {
        for (int j = 0; j < c; c++)
        {
            printf("%d  ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose :");
    for (int i = 0; i < c; c++)
    {
        for (int j = 0; j < r; r++)
        {
            printf("%d  ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
