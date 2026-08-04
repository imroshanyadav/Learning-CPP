#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr ;
    for (int i=0;i<5;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int p1 = 0;
    int p2 = arr.size() - 1;

    while (p1 < p2) {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }

    
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}