// Bubble Sort

#include<stdio.h>
#define SIZE 9

void bubble_sort(int arr[]);
void display_sort(int arr[]);

static int count=0;
static int iteration=0;

int main(void)
{
    int arr[SIZE] = {22, 33, 55, 11, 44, 66, 99, 77, 88};

    printf("Before sort : \n");
    display_sort(arr);
    bubble_sort(arr);
    printf("Number of passes : %d\n", count);
    printf("Number of iterations : %d\n", iteration);
    printf("After sort : \n");
    display_sort(arr);

    return 0;
}

void bubble_sort(int arr[])
{
    for(int it=0; it<SIZE-1; it++)
    {
        for(int pos=0; pos<SIZE-1-it; pos++)
        {
            if(arr[pos] > arr[pos+1])
            {
                int temp = arr[pos];
                arr[pos] = arr[pos+1];
                arr[pos+1] = temp;
            }
            count++;
        }
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