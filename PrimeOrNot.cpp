#include <iostream>
using namespace std;

int main() {
    int num;
    int i = 2;
    int count = 0;

    cout<<"Enter a number: ";
    cin>>num;

    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
            count += 1;
        }
    }

    if (count == 1) {
        cout<<"Is Prime"<<endl;
    } else {
        cout<<"Not a Prime"<<endl;
    }
    return 0;
}


