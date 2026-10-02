//  Array Index Out of Bounds //
#include<iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int index;

    cout<<" Enter index: ";
    cin >> index;
    
    try{
        if( index<0 || index > 9)
        throw out_of_range(" Error! Array index out of range. ");

        else {
            cout<<" Element at " << index <<" is "<<arr[index]<<endl;
        }
    }
    catch(out_of_range &o) {
        cout << o.what() << endl;
    }
    return 0;
}
