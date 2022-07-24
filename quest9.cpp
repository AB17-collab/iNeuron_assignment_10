#include<iostream>
using namespace std;
bool findTheDigit(int a,int b){
    int temp = a;
    while(temp>0){
        int r = temp%10;
        if(r==b)
            return true; 
        else
            temp /= 10;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int digitToBeSearchedFor;
    cout<<"Enter the digit you want to search for in the number:";
    cin>>digitToBeSearchedFor;
    bool ifDigitPresent = findTheDigit(n,digitToBeSearchedFor);
    if(ifDigitPresent==1)
        cout<<"Digit present"; 
    else
        cout<<"Digit not present"; 

    return 0;
}