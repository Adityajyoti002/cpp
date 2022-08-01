#include<iostream>
using namespace std;

int main(){
    cout<<"enter the marks for physics, chem, math";
    int physics, chem, math;
    cin >> physics;
    cin >> chem; 
    cin >> math;

    float avg = (physics + chem + math)/3;

    cout <<"average marks is "<< avg;


}
