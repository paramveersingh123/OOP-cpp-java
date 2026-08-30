// To Find Minimum Element In A Array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,35,45,40,50};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int minNum = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
    }

    cout << "The smallest number in the array is: " << minNum << endl;

    return 0;
}
