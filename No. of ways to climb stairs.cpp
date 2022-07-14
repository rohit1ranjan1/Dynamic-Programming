#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void calculateWays(int n){
   
    if(n==0){
        cout<<"Number of ways to climb upstairs is: 0";
        return;
    }
    int ways=n/3;
    ways=pow(3,ways);
    
    if(n%3==2)
    ways=ways*2;
    
    cout<<"Number of ways to climb upstairs is: "<<ways;
}
int main(){
    calculateWays(5);
}
/*
Number of ways to climb up 20 stairs is: 1458

Number of ways to climb up 5 stairs is: 6
*/
