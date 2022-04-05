#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int inp_number;
    int while_runner = 0;
    int add_first;
    int add_second;
    int sub_first;
    int sub_second;
    int multi_first;
    int multi_second;
    int div_first;
    int div_second;
    cout<<"Welcome to Calculator. Press Enter to Continue"<<endl;
    getchar();
    while (while_runner==0)
    {       
        cout<<"Use any of the Below Functions."<<endl;
        cout<<"Press 1 For Addition"<<endl;
        cout<<"Press 2 For Substraction"<<endl;
        cout<<"Press 3 For Multiplication"<<endl;
        cout<<"Press 4 For Division"<<endl;
        cin>>inp_number;
        if (inp_number==1)
        {
            cout<<"Enter the first Number to Add:- "<<endl;
            cin>>add_first;
            cout<<"Enter the Second Number to Add:- "<<endl;
            cin>>add_second;
            try
            {
                cout<<add_first+add_second<<endl;
            }
            catch(const std::exception& e)
            {
                cout<<"Enter a Valid Number"<<endl;
                break;
            }
            
        }
        else if (inp_number==2)
        {
            cout<<"Enter the first Number to Substract:- "<<endl;
            cin>>sub_first;
            cout<<"Enter the Second Number to Substract:- "<<endl;
            cin>>sub_second;
            try
            {
                cout<<sub_first-sub_second<<endl;
            }
            catch(const std::exception& e)
            {
                cout<<"Enter a Valid Number"<<endl;
                break;
            }
             
        }
        
        else if (inp_number==3)
        {
            cout<<"Enter the first Number to Multiply:- "<<endl;
            cin>>multi_first;
            cout<<"Enter the Second Number to Multiply:- "<<endl;
            cin>>multi_second;
            try
            {
                cout<<multi_first*multi_second<<endl;
            }
            catch(const std::exception& e)
            {
                cout<<"Enter a Valid Number"<<endl;
                break;
            }
            
            
        }

        else if(inp_number==4)
        {
            cout<<"Enter the first Number to Divide:- "<<endl;
            cin>>div_first;
            cout<<"Enter the Second Number to Divide:- "<<endl;
            cin>>div_second;
            try
            {
                cout<<div_first/div_second<<endl;
            }
            catch(const std::exception& e)
            {
                cout<<"Enter a Valid Number"<<endl;
                break;
            }
        
        }
        else {
            cout<<"Enter a Valid Option";
            break;
        }
        
    }

}
