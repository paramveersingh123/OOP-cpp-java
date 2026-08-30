// Reverse all elements Of An Array In Place
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size-1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main () {
    int arr[]={10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout<< " Original Array: ";
    for(int i = 0; i < size; i++) {
        cout<< arr[i] << " ";
    }
    cout<< endl;
    reverseArray(arr,size);

    cout<<" Reversed Array: ";
    for(int i = 0; i < size; i++) {
        cout<< arr[i] <<" ";
    }
    cout<< endl;

    return 0;
}










