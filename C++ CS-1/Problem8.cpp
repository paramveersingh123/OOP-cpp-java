// To Find Maximum Element In A Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,35,45,40,50};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int maxNum = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    cout << "The maximum number in the array is: " << maxNum << endl;

    return 0;
}
