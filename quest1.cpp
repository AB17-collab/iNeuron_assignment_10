#include<iostream>
#define PI 3.14
using namespace std;
double findArea(double r){
    return PI*r*r;
}
int main(){
    double radius;
    cout<<"Enter the radius of the circle:";
    cin>>radius;
    double areaOfTheCircle = findArea(radius);
    cout<<areaOfTheCircle;
    return 0;
}