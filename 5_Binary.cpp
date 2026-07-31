#include <iostream>
using namespace std;

int Bform(int n){
    int B_num;
    int remain;
    
    while(n>0){
        remain=n%2;        // for remainder
        n=n/2;      // for removing the last value
        
        for (int i=1;i<n;i++){
            n=10*i;
        }
        B_num;    
    }
    return B_num;
}

// Calculate the binary of any number 

int main() {
    int n;
    cout << "enter the number whose binary form you want : ";
    cin >> n;

    cout << "The binary form of " << n << "  is " << Bform(n);
    return 0;
}