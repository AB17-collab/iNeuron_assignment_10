#include<iostream>
using namespace std;
bool checkEvenOdd(int n){
    if(n&1)
        return 0;
    else
        return 1;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool isEven = checkEvenOdd(n);
    if(isEven==1)
        cout<<"Even"; 
    else
        cout<<"Odd"; 

    return 0;
}