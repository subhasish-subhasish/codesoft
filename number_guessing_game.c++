#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    while (true){
        srand(time(0));
        int num1 = 1+(rand()%20);
        int num2;
        char ans;
        cout<<"Enter Number(in range 1-20) : "<<endl;
        cin>>num2;
        if(num1==num2){
            cout<<"Wow You choose Correct Number"<<endl;
        }
        else if(num1<num2){
            int a=num2-num1;
            cout<<"Your Chossen number is grater"<<endl;
            cout<<"your Number is grater than : "<<a<<endl;
        }
        else if(num1>num2){
            int b=num1-num2;
            cout<<"Your Chossen number is lesser"<<endl;
            cout<<"your Number is ledder than : "<<b<<endl;
        }
        cout << "Enter (y/n) --  y -- for use continue  : n -- for break  ";
        cin >> ans;
        if(ans !='y'){
            cout<<"Exited from Game"<<endl;
            break;
        }
    }
}