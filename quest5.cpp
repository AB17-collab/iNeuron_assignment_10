#include<iostream>
using namespace std;
void findOddNaturalNumbers(int n,int count){
    if(count==0)
        return; 
    cout<<n<<" ";
    findOddNaturalNumbers(n+2,--count);
}
int main(){
    int n;
    cout<<"Enter how many odd natural numbers you want:";
    cin>>n;
    int count = n;
    findOddNaturalNumbers(1,count); 
    return 0;
}