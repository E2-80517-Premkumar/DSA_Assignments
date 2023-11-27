// Insertion Sort

#include<stdio.h>
#define SIZE 5
void display_sort(int arr[]);
void insertion_sort(int arr[]);

static int count=0;
static int iteration=0;

int main(void)
{
    int arr[SIZE] = {33, 55, 22, 11, 44};
    printf("Before sort : \n");
    display_sort(arr);
    insertion_sort(arr);
    printf("Number of passes : %d\n", count);
    printf("Number of iterations : %d\n", iteration);
    printf("After sort : \n");
    display_sort(arr);
    return 0;
}

void insertion_sort(int arr[])
{
    int i, j, temp;
    for(i=1; i<SIZE; i++)
    {
        temp = arr[i];
        for(j=i-1; j>=0 && arr[j] > temp; j--)
        {
            arr[j+1] = arr[j];
            count++;
        }
        arr[j+1] = temp;
        iteration++;
    }
}

void display_sort(int arr[])
{
    for(int i=0; i<SIZE; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\n");
}