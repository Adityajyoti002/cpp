#include<iostream>
using namespace std;

int main(){

    // int budget;

    // cout<<"enter your budget"<<endl;

    // cin >> budget;

    // if (budget > 2000000)
    // {
    //     cout << "you can get a scarpio" << endl;

    // }
    // else{
    //     cout<<"gareeb"
    // }

    // int marks = 55;

    // if (marks > 90)
    // {
    //     cout<<"a"<< endl;
    // }
    // else if (marks > 80)
    // {
    //    cout<<"b"<<endl;
    // }
    // else if (marks > 70)
    // {
    //    cout<<"c"<<endl;
    // }
    // else if (marks > 60)
    // {
    //    cout<<"d"<<endl;
    // }
    // else{
    //     cout<<"yiou failed"<<endl;
    // }

    // int weight;
    // cout<<"enter your weight"<<endl;
    // cin >> weight;

    // int height;
    // cout<<"enter your height"<<endl;
    // cin >> height;

    // if (height > 5)
    // {
    //     if (weight > 70)
    //     {
    //         cout<<"you ahve a good bmi"<<endl;        
            
    //     }
    //     else{
    //         cout<<"too weak";
    //     }

        
    //    }
    //    else{
    //     cout<<"complam needed"<<endl;
    //    }
    
    char grade;
    cout<<"enter your grade"<<endl;
    cin>>grade;

    switch (grade)
    {
    case 'A' : cout<<"your marks is in the range of 90-100"<<endl;
        break;
    case 'B' : cout<<"your marks is in the range of 80-90"<<endl;
    break;
    case 'C' : cout<<"your marks is in the range of 70-80"<<endl;
    break;
    case 'D' : cout<<"your marks is in the range of 60-70"<<endl;
    break;
    


    
    default: cout<<"your marks is in the range of 0-60"<<endl;
        break;
    }

    
    
    



    return 0;
}