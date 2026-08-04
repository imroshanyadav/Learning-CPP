#include <iostream>
using namespace std;

void names(string name,int n){
    if(n==0){
        return;
        
    }
    cout << name << endl;
    names(name,n-1);
}
int main(){
    string name;
    int n;
    cout<< "enter the name :";
    cin>>name;
    cout<< "enter the number:";
    cin>>n;
    names(name,n);
    return 0;
}