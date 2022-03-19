#include<iostream>
using namespace std;

int main()
{
    char op;
    float num1,num2;

    cout<<"enter an operator eihter + or - or * or /:";
    cin>>op;
    cout<<"Enter two Numbers:";
    cin>>num1>>num2;

    switch(op)
    {
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            count<<num1*num2;
            break;  
        case '/'
            cout<<num1/num2;
            break;

        default:
            cout<<"enter! operator is not correct ";
            break;
    }
    return 0;

}
