#include <iostream>
using namespace std;
// Function to calculate the factorial 

float N_fact(float n ) {
    float fact=1;
    for (float i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

// R factorial
float Rfact(float r ) {
    float fact=1;
    for (float i=1; i<=r; i++){
        fact*=i;

        
    }
    return fact;
}


  int main() {
    float n;
    cout << "Enter the value of n : ";
    cin >> n;

    float r;
    cout << "Enter the value of r : ";
    cin >> r;

    // Passing values of n and r to the functions 
    cout << "n! = " << N_fact(n) << endl;
    cout << "r! = " << Rfact(r) << endl;

    // Float  nCr
    float NCR = N_fact(n) / (Rfact(r) * N_fact(n - r));

    cout << "NCR = " << NCR << endl;

    return 0;
}
