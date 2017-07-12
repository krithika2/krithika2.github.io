#include <iostream>
using namespace std;

int main() {
    int num;
    int rev = 0;
    int rem;
    int res;

    cout<<"Enter a number: ";
    cin>>num;
    
    res = num;
    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (res == rev) {
        cout<<"Number is a Palindrome"<<endl;
    } else {
        cout<<"Not a Palindrome"<<endl;
    }

    return 0;
}

    
