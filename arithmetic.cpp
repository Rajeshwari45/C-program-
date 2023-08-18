#include<iostream>
using namespace std;
int main() {
    //clrscr();
    double num_1, num_2;
    int operation;

    cout<<"what arithmetic operation do you want to perform:"<<endl;
    cout<<"press 1 for Addition"<<endl;
    cout<<"press 2 for subtraction"<<endl;
    cout<<"press 3 for Multiplication"<<endl;
    cout<<"press 4 for Division"<<endl;
    cin>>operation;

    cout<<"Now enter two numbers"<<endl;
    cin>>num_1>>num_2;

    switch (operation)

    {
        case 1:
        cout<<"The Addition result is:"<<num_1+num_2<<endl;
        break;

        case 2:
        cout<<"The Subtraction result is:"<<num_1-num_2<<endl;
        break;

        case 3:
        cout<<"The Multiplication result is:"<<num_1*num_2<<endl;
        break;

        case 4:
        cout<<"The division result is:"<<num_1/num_2<<endl;
        break;
    }
   //getch();
   return 0;
}