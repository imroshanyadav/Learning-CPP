#include <iostream>
using namespace std;

int main(){
    int x;
    cout<< "enter the number of star"<< endl;

    cin>>x;
    for(int i = x;i>=1;i--){
        int count=0;
        for(int j = i; j>=1;j--){
            count++;
            cout<< count;
        }
        cout<< endl;
    }
    return 0;
}