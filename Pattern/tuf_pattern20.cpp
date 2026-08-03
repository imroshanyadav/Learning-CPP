#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int space = 2*(n-1);

    for(int i = 1 ; i<= n ; i++){
        for (int j =1 ; j<=i; j++){
            cout << "*";

        }for (int j =1; j<=space;j++){
            cout << " ";
        }for (int j =i ; j>=1; j--){
            cout << "*";

        }
        cout<<endl;
        space -=2;

    }
    int spaces = 2;
    for(int i = n-1 ; i>=1; i--){
        for (int j =1 ; j<=i; j++){
            cout << "*";

        }for (int j =1; j<=spaces;j++){
            cout << " ";
        }for (int j =i ; j>=1; j--){
            cout << "*";

        }
        cout<<endl;
        spaces +=2;
    }
    
    return 0;
}