// To Count Occurrences Of An Element In A Array
#include <iostream>
using namespace std;
int main() {

    int arr[] = {4, 4, 7, 4, 7, 5, 7, 4, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target;
    int count = 0;

    cout << "Enter the element you want to count: ";
    cin >> target;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    cout << "The element " << target << " appears " << count << " times in the array." << endl;

    return 0;
}
