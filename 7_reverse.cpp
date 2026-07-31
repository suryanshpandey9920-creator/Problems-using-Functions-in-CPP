#include <iostream>
using namespace std;

void reverse_NUM(int n) {
    int R_num=0;  // to store the reverse numbers  
    while(n>0){
        int digit=n%10;
        n=n/10;

        R_num+=n;

    }
    cout << R_num;
    return ;
}

int main() {
    int num;
    cout << "enter a number to reverse : ";
    cin >> num;

    cout << endl;
    cout << "the numbers are : ";reverse_NUM(num);

    return 0;
}