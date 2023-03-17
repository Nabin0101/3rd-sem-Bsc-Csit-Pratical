// C++ program for insertion sort 
#include <iostream>
using namespace std;

// insertion sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
 	
    insertionSort(arr, N);
    cout<<"Sorted Array:";cout<<endl;
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
 
    return 0;
}