#include<iostream>
using namespace std;
int findFactorial(int n){
    if(n==1 || n==0) return 1;
    else
        return (n*findFactorial(n-1))%1000000007;
}
int findNumberOfArrangements(int n,int r){
    return findFactorial(n)/findFactorial(n-r);
}
int main(){
    int n,r;
    cout<<"Enter the number of digits:";
    cin>>n;
    cout<<"Enter how many digits to consider for an arrangement:";
    cin>>r;
    cout<<findNumberOfArrangements(n,r);
    return 0;
}