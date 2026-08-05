#include <iostream>
using namespace std;

int main(){
    // input the value in array
    int n ;
    cout << "enter the number of element in the array "<<endl;
    cin >>n;
    int arr[n];
    for (int i= 0;i<n ;i++){
        cin>> arr[i];
    }
    // hash fuction 
    int hash[10]={0};
    for (int i =0 ;i<n;i++){
        hash[arr[i]] +=1;
    }
    // find the value in the hash table (frequency)
    int a ;
    cout<< "enter the number you want to find"<<endl;

    cin>>a;
    while(a--){
        int num;
        cin>>num;
        cout<< hash[num]<<endl;
    }return 0;
}