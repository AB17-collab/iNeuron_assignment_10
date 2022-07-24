#include<iostream>
using namespace std;
double simpleInterest(int p,int r,int t){
    return (p*r*t)/100;
}
int main(){
    double principal;
    double rate;
    double time;
    cin>>principal>>rate>>time;
    double interest = simpleInterest(principal,rate,time);  
    cout<<interest<<" and amount after interest:"<<principal+interest; 
    return 0;
}