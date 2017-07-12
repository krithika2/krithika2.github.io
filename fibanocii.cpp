#include <iostream>
using namespace std;

int main() {
    int num1 = 0;
    int num2 = 1;
    int sum;
    int limit;
    
    cout<<"Limlit = ";
    cin>>limit;
    
    cout<<num1<<"\n"<<num2<<"\n";

    for (int i = 0; i < limit; i++) {
        sum = num1 + num2;
        cout<<sum<<endl;
        num1 = num2;
        num2 = sum;
    }

    return 0;
}
   
    
