#include<iostream>
using namespace std;

class Marks {
    private:
    int student_marks[5];

    public:
     Marks() {
        cout<<" Enter marks of 5 students: "<<endl;
        for(int i = 0; i < 5; i++) {
            cout<<" Student "<< (i + 1) << " : ";
            cin>> student_marks[i];
        }
     }

     int findHighest() {
        int highest = student_marks[0];
        for(int i = 0; i < 5; i++) {
            if(student_marks[i] > highest) {
                highest = student_marks[i];
            }
        }
        return highest;
     }

     void displayResult() {
        int maxMark = findHighest();
        cout<<" Highest Marks among 5 students are: "<< maxMark <<endl;
     }
};

int main() {

    Marks m;

    m.displayResult();

    return 0;
}