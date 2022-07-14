
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    vector<int> fibo(n+1,-1);
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=n;i++)
    fibo[i]=fibo[i-1]+fibo[i-2];
  
    cout<<endl<<fibo[n];
    return 0;
}

/*
Enter the number: 5
5

Enter the number: 10
55
*/
