#include <iostream>
using namespace std;
int seqSearch(int list[], int start, int bounds, int key)
{
    while(start < bounds){
        if(list[start]==key){
            return start;
        } else {
            start++;
        }        
    }
    //no match found
    return -1;
}

int main(){

    int Array[] = {1706, 30, 45, 60, 90, 42, 1138, 47, 451, 6174, 73};
    int key, returnVal = 0;

    cout << "Please enter a value to search for: ";
    cin >> key;
	returnVal=seqSearch(Array, 0, sizeof(Array) / sizeof(int), key);
    if(returnVal<0){
        cout << "Value not found." <<endl;
    } else {
        cout << "Value found at index " << returnVal <<endl;
    }

    return 0;

}
