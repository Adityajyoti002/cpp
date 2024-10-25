#include <iostream>
using namespace std;

int main(){

    int side;

    cout<<"enter side"<< endl;
    cin>> side;

    for (int row = 0; row < side; row++)
    {
        for (int c = 0; c < side; c++)
        {
           if (row == 0 || row  == side-1 )
           {
            cout<< "* ";
           }
           else{
            if (c == 0 || c == side - 1 )
            {
                cout<<"* ";
            }
            else{
                cout<< "  ";
            }
            
          
           }
            
        }
        cout<< endl;
        
    }
}