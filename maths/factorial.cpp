#include <iostream>
using namespace std;

int factorial( int n){
    if (n==0 || n==1 ){
        return 1;
    }
    return n*factorial(n-1);

}

int main(){
    int x ;
    
    cout << "Enter a number you want to find the factorial of : ";
    cin >> x ;
    cout << "The factorial of "<< x << "is :" << factorial(x) << endl;


    return 0;

}