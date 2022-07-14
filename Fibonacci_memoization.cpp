#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n, vector<int>& fibo){
    if(n<=1)
    return n;
    
    if(fibo[n]!=-1)
    return fibo[n];
    
    else return fibo[n]=fibonacci(n-1,fibo)+fibonacci(n-2,fibo);
}
int main() {
    int n;
    cout<<"Enter the number ";
    cin>>n;
    vector<int> v(n+1,-1);
    cout<<endl<<fibonacci(n, v);

    return 0;
}
/*
Enter the number 6
8

Enter the number 3
2
*/
