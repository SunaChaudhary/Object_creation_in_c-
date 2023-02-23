#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    private:int roll_no;
    public: void enter()
            {
                cout<<"enter roll mo: \n";
                cin>>roll_no;
            }
             void dispalay()
            {
                cout<<"Roll no="<<roll_no;
            }       
};

int main()
{
    student a; //object creation
    a.enter();
    a.dispalay();
    getch();

}