#include <stdio.h>

int binary_search(int arr[], int num, int a, int b)
{

    if (num == arr[a])
    {
        return a;
    }
    else if (num == arr[b])
    {
        return b;
    }
    else
    {
        if (num == arr[(a + b) / 2])
        {

            return (a + b) / 2;
        }
        else if (num <= arr[(a + b) / 2])
        {
            b = (a + b) / 2;
            return binary_search(arr, num, a+1, b-1);
        }
        else if (num >= arr[(a + b) / 2])
        {
            a = (a + b) / 2;
            return binary_search(arr, num, a+1, b-1);
        }
    }
}

int main()
{
    int num, n;
    printf("Enter the desired size of your array : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array in the accending order :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the number you want to find in the array : ");
    scanf("%d", &num);
    int a = binary_search(array, num, 0, (sizeof(array) / sizeof(int) - 1));
    printf("Your number is at %dth position in the array", a + 1);

    return 0;
}