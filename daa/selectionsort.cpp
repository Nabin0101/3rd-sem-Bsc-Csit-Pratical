#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        k = i;
        for(j=i+1;j<n;j++)
            if (arr[j] < arr[k])
                k = j;
        swap(arr[i],arr[k]);
    }
}
int main()
{
    int arr[] = {76,4,89,1,6,2};
    int i,j,n,temp;
    n = sizeof(arr)/sizeof(int);
    cout<<"Unsorted Array :";
    for(i=0;i<n;i++)
    	cout<<arr[i]<<" ";cout<<endl;
    selectionSort(arr,n);
    cout<<"Sorted Array :";
     for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return(0);
}