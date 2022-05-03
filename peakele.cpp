#include <bits/stdc++.h>
using namespace std;
 int findPeak(int arr[], int n)
{
    
    if (n == 1)
        return arr[0];
    if (arr[0] >= arr[1])
        return arr[0];
    if (arr[n - 1] >= arr[n - 2])
        return arr[n - 1];
 
 
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return arr[i];
    }
}
int main()
{
    int arr[] = { 1, 3, 20, 4, 3, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<" peak element is:"<< findPeak(arr, n);
    return 0;
}