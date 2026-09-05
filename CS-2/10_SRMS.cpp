#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
    string name;
    int rollNo;
    int marks[5];

    public:
    Student() {
        cout<<" Enter Student Name: ";
        getline(cin, name);

        cout<<" Enter Roll No: ";
        cin>> rollNo;

        cout<<" Enter Marks for 5 Subjects: "<<endl;
        for(int i = 0; i < 5; i++) {
            cout<<" Subject "<<(i + 1)<<":";
            cin>> marks[i];    
        }
    }

    float calculateTotal() {
        float total = 0;
        for(int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }

    float calculatePercentage() {
        return calculateTotal() / 5.0 ; 
    }

    char determineGrade() {
        float percentage = calculatePercentage();
        if(percentage >= 90) {
            return 'A';
        } 
        if(percentage >= 75) {
            return 'B';
        }
        if(percentage >= 60) {
             return 'C';
        }
        if(percentage >= 40) {
             return 'D';
        }
        else {
             return 'F';
        }
    }

    void displayResult() {
        cout<<" STUDENT RESULT "<<endl;
        cout<<" Name: " << name << endl;
        cout<<" Roll No: " << rollNo << endl;
        cout<<" Total Marks: " << calculateTotal() << endl;
        cout<<" Percentage: "<< calculatePercentage() << endl;
        cout<<" Grade: "<< determineGrade() << endl;   
    }
};

int main() {
    Student s1;
    s1.displayResult();

    return 0;
}