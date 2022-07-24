#include<iostream>
using namespace std;
void findPrimeFactors(int n){
    cout<<"The prime factors of the number are:";
    if(n<=1){
        cout<<"No Prime factors";
    }
    while(n%2==0){
        cout<<2<<" ";
        n /= 2;
    }
    while(n%3==0){
        cout<<3<<" ";
        n /= 3;
    }
    for(int i=5;i*i<=n;i++){
        while(n%i==0){
            cout<<i<<" ";
            n /= i;
        }
        while(n%(i+2)==0){
            cout<<i+2<<" ";
            n /= (i+2);
        }
    }
    if(n>3){
        cout<<n;
    }
}
int main(){
    int n;
    cout<<"Enter the number whose prime factors you want:";
    cin>>n;
    findPrimeFactors(n);
    return 0;
}