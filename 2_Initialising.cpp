#include<iostream>
using namespace std;
int main()
{
    int var{3};
    int* p_var{&var}; //Initalising pointer with address of var
    cout<<"Number is : "<<var;//Printing what's the number is 
    cout<<" , p_var its address is : "<<p_var<<endl;//Printing whats the address of integer.
    //Number is : 3 , p_var its address is : 0x61ff08
    /*Reinitialising pointers :*/
    int var2{43};
    p_var = &var2;
    cout<<"Number is : "<<var2;//Printing what's the number is 
    cout<<"  , p_var its address is : "<<p_var<<endl;//Printing whats the address of integer.
    //Number is : 43  , p_var its address is : 0x61ff04
    return 0;
}
