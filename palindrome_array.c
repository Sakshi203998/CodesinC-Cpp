#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 30, 20, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = len - 1, temp, flag = 0;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = 1;
            break;
        }
        
    }
    if (flag >= 1)
            printf("not an palindrome array");
        else
            printf("palindrome array");
}