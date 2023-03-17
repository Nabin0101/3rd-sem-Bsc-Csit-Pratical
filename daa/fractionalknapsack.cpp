#include <bits/stdc++.h>
using namespace std;

//Comparison Function to sort array according to value/weight ratio
static bool comp(vector<int>& a,vector<int>& b){
    return (double)((double)a[0]/(double)a[1]) > (double)((double)b[0]/(double)b[1]);
}

int main() {
    int n = 3;
    //Total weights or total capacity
    int W = 20;
    //Implementing nx2 array containing values and its weights
    vector<vector<int>> arr = {{25,20},{15,12},{20,11}};
    
    //Sorting array according to value/weight ratio for storing maximum values 
        sort(arr.begin(),arr.end(),comp);
    
        double totalValues = 0;  // For storing maximum value from the given capacity of sack
    
    //Iterating through given array till the given capacity is not filled
        for(int i=0;i<n;i++){
            //if we have more capacity in sack than ith weight
            if(W>=arr[i][1]){
                totalValues += arr[i][0];
                W -= arr[i][1];      //decrement capacity by weight we add
            }
            else{
                //if we can't add more weight add it's fractional part 
                double fraction = ( (double)arr[i][0])/((double)arr[i][1]);
                totalValues += fraction*((double)W);
                break;
            }
        }
    
        cout<<"Total Maximum Value of item from the given weight is "<<totalValues;
}