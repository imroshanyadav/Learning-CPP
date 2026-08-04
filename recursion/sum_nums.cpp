#include <iostream>
using namespace std;

int sums(int n){
    if (n==1){
        return 1;

    }return n+sums(n-1);
}

int main(){
    int n ;
    cin >>n;

    cout<< sums(n)<< endl;
    return 0;
}