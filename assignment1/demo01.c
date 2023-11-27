// Implement linear search and binary search using recursion.

#include<stdio.h>
int linear_search(int arr[], int SIZE, int key);
int binary_search(int arr[], int left, int right, int key);

int main(void)
{
    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int key;
    int SIZE = sizeof(arr)/sizeof(int);
    int left=0, right=SIZE-1;

    printf("Enter the key to search : ");
    scanf("%d", &key);

    int index = linear_search(arr, SIZE, key);
    printf("Linear Search : \n");
    if(index != -1)
        printf("Key is found at index %d\n", index);
    else
        printf("Key is not found!");

    int index1 = binary_search(arr, left, right, key);
    printf("Binary Search : \n");
    if(index1 != -1)
        printf("Key is found at index %d\n", index1);
    else
        printf("Key is not found!");
    return 0;
}

int linear_search(int arr[], int SIZE, int key)
{
    if(SIZE < 0)
        return -1;
    if(key == arr[SIZE-1])
            return SIZE-1;
    return linear_search(arr, SIZE-1, key);   
}

int binary_search(int arr[], int left, int right, int key)
{
    int mid;
    if(left <= right)                      
    {                                         
        mid = (left + right)/2;               

        if(key == arr[mid])
            return mid;

        if(key < arr[mid])
        {
            right = mid - 1;
            return (binary_search(arr, left, right, key));
        }
        else
        {
            left = mid + 1;
            return (binary_search(arr, left, right, key));
        }
    }
    return -1;
}