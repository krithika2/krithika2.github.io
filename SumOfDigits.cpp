#include <iostream>
using namespace std;

int main() {
    int num;
    int rem;
    int i;
    int res;

    cout<<"Enter a number: ";
    cin>>num;

    while (num > 0) {

        rem = num % 10;
        res += rem;

        num /= 10;

    }

    cout<<"Sum of digits = "<<res<<"\n";
    
    return 0;
}

