#include<iostream>
using namespace std;
int findFactorial(int n){
    if(n==1 || n==0) return 1;
    else
        return (n*findFactorial(n-1))%1000000007;
}
int main(){
    int n;
    cout<<"Enter the number you want:";
    cin>>n;
    cout<<"The factorial of the number is:"<<findFactorial(n);
    return 0;
}