#include <iostream>
using namespace std;

// Problem print 2 number sum using functions

//  for Integer numbers 
int i_sum( int a, int b ) {
    int sum = a+b; 
    return sum;
}

// For Float numbers 
float f_sum( float a, float b ) {
    float sum = a+b; 
    return sum;
}

// For Double numbers 
double d_sum( double a, double b ) {
    double sum = a+b; 
    return sum;
}

int main() {
    // Printing all these function with different arguments 
    cout<< "the integer value of sum is:  " << i_sum(2,10) << endl;
    cout<< "The float value of sum is : " << f_sum(10, 30) << endl;
    cout << "The double value of sum is : "<< d_sum(45,55)<< endl;
    cout << endl;
   
    // Checking the size of these function in bytes 
    cout << "The size of the integer function is = "<< sizeof(i_sum(2,4)) << " bytes"  << endl;
    cout << "The size of the float function is = "<< sizeof(f_sum(3,4)) << " bytes"  << endl;
    cout << "The size of the double function is = "<< sizeof(d_sum(20,26)) << " bytes"  << endl;
    
    return 0;
}