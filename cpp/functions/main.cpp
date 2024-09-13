#include<iostream>
using namespace std;

// void printcounting(){
//     for (int i = 0; i <= 5; i++)
//     {
//         cout<< i << " ";
//     }
//     cout<<" "<< endl;
// }

// int main(){

//     printcounting();
//     cout<< "function deployed"<< endl;

//     printcounting();

//     int a;
//     cin>> a ;
//     cout << a << endl;

//     printcounting();
//     return 0;
// }

// int sum(int a, int b){
//     int totalsum = a + b;
//     return totalsum;
// }

// int main(){
//     int ans = sum(4,3);
//     cout<< ans << endl;

//     return 0;
// }
int getmultiplication(int a, int b, int c){

    int result = a*b*c;
    return result;
}

void Printnametentimes(){

    for (int i = 0; i < 10; i++)
    {
        cout<<"Aditya"<<endl;
    }
    
}

void printmultiples(int num){

    for (int i = 1; i <= 10; i++)
    {
        num = num*i;
        cout<<num<<endl;
    }
}
int convertintofaren(int far){
    int celsius = (far-32)*5/9;
    return celsius;
}

int main(){

    //calling functions
    // int mult = getmultiplication(5,4,3);
    // cout<< mult<< endl;

    


    return 0;
}