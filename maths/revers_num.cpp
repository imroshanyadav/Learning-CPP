#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int new_num=0;


    int count = 0;
    int digits = 0;

    while (n > 0) {
        digits =n%10;
        new_num = new_num * 10 + digits;
        n = n / 10;      
        count++;
    }

    cout << new_num;

    return 0;
}