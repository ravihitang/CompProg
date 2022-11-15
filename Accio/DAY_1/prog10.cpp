#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[3][3];
   int sum=0;
   bool ans;
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           cin>>arr[i][j];
       }
   }
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
          
          sum+=(arr[i][j]+arr[i][j+1]);
       }
   }
   if(ans){
       cout<<sum;
   }
   else{
       cout<<"0";
   }
   return 0;
}