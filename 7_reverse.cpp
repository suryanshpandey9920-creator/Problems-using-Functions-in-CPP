#include <iostream>
using namespace std;

void reverse_NUM(int n) {  
        int digit=0;
        while(n>0){
        
            digit=n%10;   // This store the last digit at the starting 
            n=n/10;       // Helps to remove the last digit after storing 
            cout << digit << " ";  // Printing all the digits in reverse order
        }
        cout << endl;
        return  ;
}

int main() {
    int num;
    cout << "enter a number to reverse : ";
    cin >> num;

    cout << endl;

    cout << "the reversed numbers are : ";
    // calling the function and passing the copy value enterd by the user
    reverse_NUM(num);

    return 0;
}