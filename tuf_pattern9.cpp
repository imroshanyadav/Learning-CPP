#include <iostream>
using namespace std;
// #include <tuf_pattern7.cpp>
// #include <tuf_pattern8.cpp>



int main(){

    int n ;
    cin>> n;
    for (int i = 0 ; i<n ; i++){

        //space

        for (int j = 0;j<n-i-1 ; j++){
            cout << " ";

        }
        // stars 
        for (int j =0 ;j<i*2 +1; j++){
            cout << "*";

        }

        // space
        for (int j = 0;j<n-i-1 ; j++){
            cout << " ";

        } 


        cout<< endl;

    }

    for (int i = n-1 ; i>=0 ; i--){

        //space

        for (int j = 0;j<n-i-1 ; j++){
            cout << " ";

        }
        // stars 
        for (int j =0 ;j<i*2 +1; j++){
            cout << "*";

        }

        // space
        for (int j = 0;j<n-i-1 ; j++){
            cout << " ";

        } 


        cout<< endl;

    }
return 0;

}