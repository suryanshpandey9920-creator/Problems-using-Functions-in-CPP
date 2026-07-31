#include <iostream>
using namespace std;

void Even_Odd(int n) {
    if (n>0 && n%2==0){
        cout << "this number is Even ";
    }
    else if (n<0 && n%2==0){
        cout << "this number is Even Negative number";
    }
    else if (n<0 && n%2!=0){
        cout << "this number is Odd Negative number";
    }
    else {
        cout << "this number is Odd";
    }

    return ;
}

int main() {
    int num;
    cout << "Enter value to check it is even or odd : ";
    cin >> num;

    cout << "The entered number " << num << " is " ;Even_Odd(num);
    return 0;
}
