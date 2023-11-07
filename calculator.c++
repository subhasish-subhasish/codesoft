#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double num1,num2;
    cout<<"Enter First Number :";
    cin>>num1;
    cout<<"Enter Second Number :";
    cin>>num2;
    char oparator;
    cout<<"Enter Operation :";
    cin>>oparator;
    switch(oparator){
        case '+': cout<<"Result :"<<(num1+num2)<<endl;
        break;
        case '-': cout<<"Result :"<<(num1-num2)<<endl;
        break;
        case '*': cout<<"Result :"<<(num1*num2)<<endl;
        break;
        case '/': cout<<"Result :"<<(num1/num2)<<endl;
        break;
    }
}