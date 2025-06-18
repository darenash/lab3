#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    int num;
    cin>>num;

    bool find = false;

    for (int i = 0; i<n; i++) {
        if (arr[i]==num) {
            find = true;
            cout<<"Found at index :" << " "<<i<<"\n";
        }

    }
    if (!find) {
      cout<<"Not found"<<endl;
    }


  
}