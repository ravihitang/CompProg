//given n print the pattern in the format
//
//Example:
// 3
// * * *
// *
// *
// *




#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=0;i--){
        if(n==i){
            for(int j=0;j<n;j++){
                cout<<"*";
                cout<<" ";
            }
        }
        else{
        cout<<"\n";
        cout<<"*";
        }
    }
    return 0;
}