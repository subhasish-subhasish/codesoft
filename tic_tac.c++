#include <iostream>
using namespace std;

char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}}; //global variable

//code for bord
void boad(){
    cout<<"   |   |  "<<endl;
    cout<<" "<<space[0][0]<<" | "<<space[0][1]<<" | "<<space[2][0]<<" "<<endl;
    cout<<"___|___|__"<<endl;
    cout<<"   |   |  "<<endl;
    cout<<" "<<space[1][0]<<" | "<<space[1][1]<<" | "<<space[1][2]<<" "<<endl;
    cout<<"___|___|__"<<endl;
    cout<<"   |   |  "<<endl;
    cout<<" "<<space[2][0]<<" | "<<space[2][1]<<" | "<<space[2][2]<<" "<<endl;
    cout<<"   |   |  "<<endl;
}
//code function check
int check(){
    for(int i=0;i<3;i++){
            if((space[i][0]==space[i][1] & space[i][1]==space[i][2])||(space[0][i]==space[1][i]&space[0][i]==space[2][i])){
                return 1;   
            }
        }
    if((space[0][0]==space[1][1] & space[1][1]==space[2][2])||(space[0][2]==space[1][1]&space[2][0]==space[2][0])){
            return 1;
        }
    else if (space[0][0] != '1' && space[0][1] != '2' && space[0][2] != '3' && space[1][0] != '4' && space[1][1] != '5' && space[1][2] != '6'  && space[2][0] != '7' && space[2][1] != '8' && space[2][2] != '9'){
        return 0;
    }
    else{
        return -1;
    }
}
int main(){
    int player =1;
    int choice_number;
    char mark;
    int i;
    do{
        boad();
        player=(player%2)?1:2;
        cout << "Player " << player << ", enter a number:  ";
        cin>>choice_number;
        mark=(player == 1) ? 'X' : 'O';
        if (choice_number == 1 && space[0][0] == '1')
            space[0][0] = mark;
        else if (choice_number == 2 && space[0][1] == '2')
            space[0][1] = mark;
        else if (choice_number == 3 && space[0][2] == '3')
            space[0][2] = mark;
        else if (choice_number == 4 && space[1][0] == '4')
            space[1][0] = mark;
        else if (choice_number == 5 && space[1][1] == '5')
            space[1][1] = mark;
        else if (choice_number == 6 && space[1][2] == '6')
            space[1][2] = mark;
        else if (choice_number == 7 && space[2][0] == '7')
            space[2][0] = mark;
        else if (choice_number == 8 && space[2][1] == '8')
            space[2][1] = mark;
        else if (choice_number == 9 && space[2][2] == '9')
            space[2][2] = mark;
        else{
            cout<<"Invalid move ";
            player--; // decrement of player
            cin.ignore();
            cin.get();
        }
        i=check();
        player++;
    }while(i==-1);
    boad();
    if(i==1)
        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";
    cin.ignore();
    cin.get();
    return 0;
}