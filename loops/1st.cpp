#include <iostream>
using namespace std;

int main(){

    for ( int i = 0; i <= 3; i++)
    {
        cout << i;
        cout<< "=";
        for ( int j = 0; j < 2 ; j++)
        {
            
            cout<< "*" ;
        }
        cout << endl;
        
    }
    

    return 0;
}