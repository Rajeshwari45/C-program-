#include<iostream>
using namespace std;

int main() {

    int a, b;

    cout<<"enter value of a and b" <<endl;

    cin >> a >> b;

    cout << "Which operater" <<endl;
    
    char op;
    cin >> op;


    switch (a+2*b)
    {
    case '+':/* constant-expression */
        cout << a+b << endl;/* code */
        break; 

    case '-':/* constant-expression */
        cout << a-b << endl;/* code */
        break;

    case '*':/* constant-expression */
        cout << a*b << endl;/* code */
        break;

    case '/':/* constant-expression */
        cout << a/b << endl;/* code */
        break;

    default: cout << "i am in case default" <<endl;
        break;
    }

    return 0;
}