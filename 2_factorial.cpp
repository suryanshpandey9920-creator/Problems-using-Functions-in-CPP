#include <iostream>
using namespace std;

// creating a factorial fucntion for numbers upto 1 to 12 
int factorial(int n) {
    int fact=1;
    for (int i=1; i<=n;i++){
        fact*=i;
    }
    return fact;
}

// Function for factorial greater than 12
double d_factorial(int n) {
    double fact=1;
    for (double i=1; i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main() {
    cout << factorial(12)<<endl;
    cout << d_factorial(15) << endl;
    return 0;
}