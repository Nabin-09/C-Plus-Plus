#include<iostream>
using namespace std;
int main()
{
    int* p_number{nullptr}; // can store addresses of variables type int only.
    double* p_fractional_number{nullptr};//can store addresses of variables type double only.
    //Explicitly  initialize to null pointer.
    cout<<"Size of number pointer : "<<sizeof(p_number)
        <<" , size of int : "<<sizeof(int)<<endl; //Size of number pointer : 4 , size of int : 4
    cout<<"Size of fractional_number pointer : "<<sizeof(p_fractional_number)
        <<" , size of int : "<<sizeof(double)<<endl; //Size of fractional_number pointer : 4 , size of int : 8
    return 0;
}
