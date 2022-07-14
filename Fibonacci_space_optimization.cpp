#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int prev2=0;
    int prev=1;
    cout<<"Fibonacci series: "<<prev2<<" "<<prev<<" ";
    for(int i=2;i<=n;i++){
    int curr=prev+prev2;
    prev2=prev;
    prev=curr;
    cout<<curr<<" ";
    }
    return 0;
}

/*
Enter the number: 5
Fibonacci series: 0 1 1 2 3 5 

Enter the number: 20
Fibonacci series: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765
*/
