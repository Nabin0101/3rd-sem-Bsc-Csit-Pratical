#include<bits/stdc++.h>
#define swap(x,y) { x = x + y; y = x - y; x = x - y; }

using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool flag;
    for(i = 0; i < n; i++)
    {
        flag = false;                                 
        for(j = 0; j < n-i-1; j++)
        {
            
            if( arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(!flag)
        {
            break;
        }
    }
}
int main(int argv, char* argc[])
{
    int arr[] = {1,90,6,18,23,4,17,2,49};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Unsorted Array :";
    for(int i=0;i<n;i++)                            
        cout<<arr[i]<<" ";
    cout<<endl;
    bubbleSort(arr,n);                              
    cout<<"Sorted Array :";
    for(int i=0;i<n;i++)                            
        cout<<arr[i]<<" ";
    return(0);
}