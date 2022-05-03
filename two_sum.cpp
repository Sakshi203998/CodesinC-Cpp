#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,2,3,5,8,6,10};
    int target=14,size=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=size-1;
    sort(arr,arr+size);
    while(i<j)
    {
        if(arr[i]+arr[j]==target)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            i++;j--;
        }
        else if(arr[i]+arr[j]>target)
        {
            j--;
        }
        else{
            i++;
        }
        
    }
}
   