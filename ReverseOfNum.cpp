#include<iostream>
using namespace std;

int main() {
    int num;
    int rev = 0;
    int rem;

    cout<<"Enter a number: ";
    cin>>num;

    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    cout<<"Reverse of a given number= "<<rev<<endl;
    
    return 0;
}





