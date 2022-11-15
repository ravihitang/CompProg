//                              PROBLEM STATEMENT
// Given an array of size N, Find the sum of the array given the conditions :
//    if the value of current position is lesser than previous value then subtract 1 from current Value
//    if the value of current position is greater than previous value then square the current value.
//      
// Sample Input :
// Value of N: 5
// Enter values: 1 2 3 6 5 
//
//Sample Output :
// SUM IS: 54


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[10000];
    int sum;
    cout<<"Value of N: ";
    cin>>n;
    cout<<"Enter values: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum=arr[0];
    for(int j=1;j<n;j++)
    {
        if(arr[j-1]<arr[j]) //prev is lesser than current
        {
            sum+=(arr[j]*arr[j]);
        }
        else if(arr[j-1]>arr[j]) //prev is greater than current
        {
            sum+=(arr[j]-1);
        }
    }
    cout<<"SUM IS: "<<sum;
    return 0;
}