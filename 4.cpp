#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100]; 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverse(arr, arr + n); 

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}