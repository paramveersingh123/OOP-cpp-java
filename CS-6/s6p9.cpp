// Count Characters, Words and Lines //
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    char ch, last='\0';
    int characters=0, words=0, lines=0;
    bool inWord=false;

    ifstream fin("file.txt");

    if(fin.is_open()) {

        while(fin.get(ch)) {
            characters++;
            last=ch;

            if(ch=='\n')
                lines++;

            if(ch==' ' || ch=='\n')
                inWord=false;
            else if(inWord==false) {
                words++;
                inWord=true;
            }
        }

        if(characters>0 && last!='\n')
            lines++;

        fin.close();

        cout<<"Total Characters: "<<characters<<endl;
        cout<<"Total Words: "<<words<<endl;
        cout<<"Total Lines: "<<lines<<endl;
    }
    else {
        cout<<"Error: Unable to open file."<<endl;
    }

    return 0;
}