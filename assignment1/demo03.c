// Selection Sort

#include<stdio.h>
#define SIZE 5

void selection_sort(int arr[]);
void display_sort(int arr[]);

static int count=0;
static int iteration=0;

int main(void)
{
    int arr[SIZE] = {22, 33, 55, 11, 44};

    printf("Before sort : \n");
    display_sort(arr);
    selection_sort(arr);
    printf("Number of passes : %d\n", count);
    printf("Number of iterations : %d\n", iteration);
    printf("After sort : \n");
    display_sort(arr);

    return 0;
}

void selection_sort(int arr[])
{
    for(int sel_pos=0; sel_pos<SIZE-1; sel_pos++)
    {
        for(int pos=sel_pos+1; pos<SIZE; pos++)
        {
            if(arr[sel_pos] > arr[pos])
            {
                int temp = arr[sel_pos];
                arr[sel_pos] = arr[pos];
                arr[pos] = temp;
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