#include <iostream>
using namespace std;

int digit_sum(int n) {
    int digit_sum=0;
    int last_digit;

    while (n>0){
        last_digit= n%10;
        n=n/10;
      

    digit_sum+=last_digit;
    }

    return digit_sum;
}

int main() {
    cout << digit_sum(4532);
    return 0;
}