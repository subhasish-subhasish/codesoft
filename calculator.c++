#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double num1,num2;
    char oparator;
    while(true){
        cout<<"Enter First Number :";
        cin>>num1;
        cout<<"Enter Operation (+ - * / ) : ";
        cin>>oparator;
        cout<<"Enter Second Number :";
        cin>>num2;
        switch(oparator){
            case '+': cout<<"Result :"<<(num1+num2)<<endl;
            break;
            case '-': cout<<"Result :"<<(num1-num2)<<endl;
            break;
            case '*': cout<<"Result :"<<(num1*num2)<<endl;
            break;
            case '/': cout<<"Result :"<<(num1/num2)<<endl;
            break;
            default: cout<<"invalid operation "<<endl;
        }
        char ans;
        //Asking from user for exit or continue
        cout << "Enter (y/n) --  y -- for use continue  : n -- for break  ";
        cin >> ans;
        if(ans !='y'){
            cout<<"Exited from calaulation"<<endl;
            break;
        }
    }
    return 0;
}