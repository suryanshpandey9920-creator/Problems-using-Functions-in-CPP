#include <iostream>
using namespace std;

// Function that create the reverse of a number
int Num_reverse(int n) {
    int digit = 0 ;   // variable that hold the reverse number 
    int reverse = 0 ;  // variable that help to return the variable 
    while (n>0){
        digit = n%10;     // used to store last digit
        n=n/10;           // used to remove last digit and change the value  of n
        
        //using the reverse variable and storing the values 
        reverse = reverse * 10 + digit;
       
    }
    cout << "The reverse digits are: ";
    return reverse;
}

// Main function 
int main() {
    int number;
    cout << "Enter the number : ";
    cin >> number ;

    cout << Num_reverse(number);

    return 0;
}