#include <iostream>
using namespace std;

int main() {
    int n;
    // int nc = n;
    cin >> n;
     int nc = n;
    int new_num=0;


    int count = 0;
    int digits = 0;

    while (n > 0) {
        digits =n%10;
        new_num = new_num * 10 + digits;
        nc= nc / 10;      
        count++;
    }
    cout<< new_num<< endl;
    cout<< n<< endl;
    if (new_num ==n){
        cout<< "the Number is Pelindrome"<<endl;
    }else{
        cout<< "not pelindrom"<<endl;
    }

    return 0;
}