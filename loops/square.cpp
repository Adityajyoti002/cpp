#include <iostream>
using namespace std;

int main(){

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int i = 0; i < 4; i++)
    //     {
    //         cout << "* ";
    //     }
    //     cout<<endl;
        
    // }

    int length, width;

    cout<<"enter length"<< endl;
    cin>> length;

    cout<<"enter width"<<endl;
    cin>> width;

    for (int i = 0; i < length; i++)
    {
       for (int j = 0; j < width; j++)
       {
        cout<< "* ";
       }
       cout<< endl;
       
    }
    
    

    return 0;

}
