#include<iostream>
using namespace std;
void findNaturalNumbers(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    findNaturalNumbers(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter how many natural numbers you want:";
    cin>>n;
    findNaturalNumbers(n); 
    return 0;
}