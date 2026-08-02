#include <iostream>
using namespace std;

int main(){

    int n ;
    cin>>n;
    int space =0;

    for (int i =0 ; i<n;i++){
        for (int j =0 ;j<2-i;j++){
            cout<< "*";
        }
        for (int j =0 ;j<space;j++){
            cout<< " ";
        }
        for (int j =0 ;j<2-i;j++){
            cout<< "*";
        }
        cout<< endl;
        space+=2;
    }

    for (int i =0 ; i<n;i++){
        for(int j = 0 ; j<n;j++){
            if (i==0 || i==n-1 || j==0 || j==n-1)
                cout<< "*";
            else
                cout<< " ";
        }
        cout<< endl;
    }
    return 0;
}