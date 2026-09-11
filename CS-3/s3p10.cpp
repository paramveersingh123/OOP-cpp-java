// University Result Processing System //
#include<iostream>
using namespace std;

class Result
{
    public:
    int rollNo;
    int marks[5];

    void compare(Result r)
    {
        int total1 = 0;
        int total2 = 0;

        for(int i = 0; i < 5; i++)
        {
            total1 = total1 + marks[i];
            total2 = total2 + r.marks[i];
        }

        if(total1 > total2)
            cout <<" Roll No: "<<rollNo<<" has higher marks. "<<endl;
        else if(total2 > total1)
            cout <<" Roll No: "<<r.rollNo<<" has higher marks. "<<endl;
        else
            cout <<" Both have equal marks. " << endl;
    }
};


Result topper(Result r1, Result r2, Result r3)
{
    int total1 = 0, total2 = 0, total3 = 0;

    for(int i = 0; i < 5; i++)
    {
        total1 = total1 + r1.marks[i];
        total2 = total2 + r2.marks[i];
        total3 = total3 + r3.marks[i];
    }

    if(total1 > total2 && total1 > total3) {
        return r1;
    }
    else if(total2 > total3) {
        return r2;
    }
    else {
        return r3;
    }
}


Result grace(Result r)
{
    int totalGrace = 0;

    for(int i = 0; i < 5 && totalGrace < 20; i++)
    {
        r.marks[i] = r.marks[i] + 5;
        totalGrace = totalGrace + 5;
    }

    return r;
}

int main()
{
    Result r1, r2, r3;
    Result top, revised;

    r1.rollNo = 101;
    r1.marks[0] = 70;
    r1.marks[1] = 75;
    r1.marks[2] = 80;
    r1.marks[3] = 85;
    r1.marks[4] = 90;

    r2.rollNo = 102;
    r2.marks[0] = 80;
    r2.marks[1] = 75;
    r2.marks[2] = 85;
    r2.marks[3] = 70;
    r2.marks[4] = 95;

    r3.rollNo = 103;
    r3.marks[0] = 70;
    r3.marks[1] = 80;
    r3.marks[2] = 75;
    r3.marks[3] = 80;
    r3.marks[4] = 85;

    r1.compare(r2);

    top = topper(r1, r2, r3);
    cout <<" Topper Roll No: " << top.rollNo << endl;

    revised = grace(r3);
    cout <<" Revised Marks: ";
    for(int i = 0; i < 5; i++)
    {
        cout << revised.marks[i] << " ";
    }

    return 0;
}