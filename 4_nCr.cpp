#include <iostream>
using namespace std;

    // program to calculate the NCR. 
    int fact(int n ) {
        int N_fact=1;
        for (int i=1; i<=n; i++){
        N_fact*=i;
        }

        return N_fact;
    }


    // Main function of the program 
int main(){

    int n;
    int r;
    cout << "enter the value of n : ";
    cin >> n;

    cout << "enter the value of r : ";
    cin >> r;

    cout<< "The n factorial is: " << fact(n) << endl;
    cout<< "The r factorial is: " << fact(r) <<endl;
    cout<< "The n-r factorial is : " << fact(n)-fact(r)<< endl;

    cout << endl;
    cout << endl;
    // The Binomial nCr formula.

    int nCr= (fact(n) / (fact(r) * ( fact(n - r) )));
    cout << "The value of nCr is: " <<nCr;
    return 0;
}