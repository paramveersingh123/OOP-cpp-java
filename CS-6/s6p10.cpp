// Copy Contents from One File to Another //
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;

    ifstream fin("source.txt");
    ofstream fout("destination.txt");

    if(fin.is_open() && fout.is_open())
    {
        while(fin.get(ch))
        {
            fout.put(ch);
        }

        cout<<"File copied successfully."<<endl;

        fin.close();
        fout.close();
    }
    else
    {
        cout<<"Error: Unable to open file."<<endl;
    }

    return 0;
}