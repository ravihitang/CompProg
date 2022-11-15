/* 
Alice finds the calculation of electricity bill very confusing due to different slab rates. Your task is to help out Alice by calculating the total electricity bill for the given units of consumption.

Consider the following slab rates :

For the first 50 units, Rs. 5.00/unit  
For the next 100 units, Rs. 7.00/unit  
For the next 100 units, Rs. 9.00/unit  
For units above 250, Rs. 12.00/unit
Input Format
An integer, representing units of electricity consumption.

Output Format
Return total electricity bill.

Example
Sample Input 1

275
Sample Output 1

2150
Sample Input 2

136
Sample Output 2

852
*/

# include <bits/stdc++.h>
using namespace std;
int main() {
    int unit,total=0;
    cin>>unit;
    if(unit<=50){
        total=unit*5;
    }
    else if(unit<=150){
        total=(50*5)+((unit-50)*7);
    }
    else if (unit<=250){
         total=(50*5)+(100*7)+((unit-150)*9);
    }
    else if(unit>250){
        total=(50*5)+(100*7)+(100*9)+((unit-250)*12);
    }
    cout<<total;
    return 0;
}