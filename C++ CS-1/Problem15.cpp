// To Remove Duplicate Elements From An Array
#include <iostream>
using namespace std;

int main() {
    int arr[10]; 
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique elements: ";
    
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1; // Found a match!
                break;
            }
        }

        
        if (isDuplicate == 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
