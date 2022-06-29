#include <stdio.h>
void sort(int n[], int sz);

int main()
{
    int arr[50], i, size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter array[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    sort(arr, size);
    printf("\n\nThe sorted array is:- ");
    for (i = 0; i < size; i++)
        printf("Enter array[%d]: %d\n", i, arr[i]);

    return 0;
}

void sort(int n[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (n[i] > n[j])
            {
                n[i] = n[i] + n[j];
                n[j] = n[i] - n[j];
                n[i] = n[i] - n[j];
            }
        }
    }
}