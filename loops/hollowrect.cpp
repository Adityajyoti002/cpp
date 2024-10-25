#include <iostream>
using namespace std;

int main(){

    int length, width;

    cout<<"enter length"<< endl;
    cin>> length;

    cout<<"enter width"<<endl;
    cin>> width;

    for (int row = 0; row < length; row++)
    {
        for (int c = 0; c < width; c++)
        {
           if (row == 0 || row  == length-1 )
           {
            cout<< "*";
           }
           else{
            if (c == 0 || c == width - 1 )
            {
                cout<<"*";
            }
            else{
                cout<< " ";
            }
            
          
           }
            
        }
        cout<< endl;
        
    }
    



    return 0;
}
