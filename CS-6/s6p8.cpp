//  Student Record Writer //
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    int rollNo;
    string name;
    float marks;

    ofstream fout("students.txt");
    if(fout.is_open()) {

    for(int i=1; i<=3; i++) {

        cout<<" Enter details of Student "<<i<<endl;

        cout<<" Enter Roll Number: ";
        cin>>rollNo;

        cout<<" Enter Name: ";
        getline(cin>>ws, name);

        cout<<" Enter Marks: ";
        cin>>marks;

        fout<<" Roll Number: "<<rollNo<<endl;
        fout<<" Name: "<<name<<endl;
        fout<<" Marks: "<<marks<<endl;
    }

    fout.close();
    
    cout<<"Student records saved successfully."<<endl;
    }
    else {
        cout<<"  Error: Unable to open file. "<< endl;
    }

    return 0;
}