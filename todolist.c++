#include <iostream>
#include <vector>
using namespace std;

struct tsk {
  string taskname;
  bool isCompleted;
};

class todolist{
    vector<tsk> task;
    public:
        void add(){
            string addtask;
            cout<<"Enter your task : ";
            cin>>addtask;
            task.push_back({addtask,false});
        }
        void view(){
            if (task.empty()) {
                cout << "No tasks  addes" << endl;
            }
            else{
                cout << "Your tasks:" << endl;
                cout<<"---------------"<<endl;
                for (int i = 0; i < task.size(); i++) {
                    cout << i+1 << " task : " << task[i].taskname <<"status :"<<task[i].isCompleted<<endl;
                }
                cout<<"---------------"<<endl;
            }
        }
        void remove(){
            if (task.empty()) {
                cout << "No tasks is avalble" << endl;
                }
            else{
                cout<<"Enter the task number which you want to delete :"<<endl;
                int tskno;
                cin>>tskno;
                if (tskno < 1 || tskno > task.size()) {
                        cout << "Invalid task number." << endl;
                }
                else{
                    task.erase(task.begin()+tskno-1);
                    cout<< "Task deleted Successfully!" << endl;
                }
            }
        }
        void mark(){
            int mark;
            cout<<"Enter The number which you want to mark as completed";
            cin>>mark;
            task[mark-1].isCompleted=true;
        }
};
int main(){
    todolist daily;
    while(true){
        cout<<"To-Do List Manager "<< endl;
        cout<<"1. Add task" << endl;
        cout<<"2. View tasks" << endl;
        cout<<"3. Delete task" << endl;
        cout<<"4. Mark Task "<<endl;
        cout<<"0. Exit" << endl;
        cout<<"-------------"<<endl;
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice) {
            case 1:daily.add();
            break;
            case 2:daily.view();
            break;
            case 3:daily.remove();
            break;
            case 4:daily.mark();
            break;
            case 0:cout << "Exiting To-Do List Manager." << endl;
            return 0;
            default:cout << "Invalid choice. Please enter a number between 0 and 3." << endl;
        }
    }
}