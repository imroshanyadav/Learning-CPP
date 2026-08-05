#include <iostream>
using namespace std;

int fibonacci(int x)
{
    if (x == 0){
        return 0;
    }
        

    else if(x == 1){
        return 1;
    }
        

    else {
        return x + fibonacci(x-1);
    }
}

int main(){
    int x ;

    cout << "Enter a number you want to find the fibonacci of :";
    cin >> x;
    cout << " The fibonacci of "<< x << " is :" << fibonacci(x);

    return 0;

}