#include<iostream>
#include <windows.h>
using namespace std;

void print_task(string tasks[], int task_count){
    cout<<"Task To Do "<<endl;
    cout<<"-----------------------------------------"<<endl;
    for(int i=0; i<task_count; i++){
        cout<<"Task"<<" "<<i<<" : "<<tasks[i]<<endl;
    }
    cout<<"--------------------------------"<<endl;
}

int main(){

    string task[10] = {""};

    // counter var -> know many task we have 
    int task_count = 0;
    int option = -1;

    while(option != 0){
        // we will make menu here
        cout<<"--- TO DO LIST ---"<<endl;
        cout<<"1- To Add New Task"<<endl;
        cout<<"2- To View Tasks"<<endl;
        cout<<"3- Delete The Task"<<endl;
        cout<<"0- Terminate the program"<<endl;
        cin>>option; 

        switch(option){
            case 1:
            {
                if(task_count > 9){
                    cout<<"--- Task List Is Full---"<<endl;
                }
                else{
                    cout<<"Enter A New Task"<<" "<<endl;
                    cin.ignore();
                    getline(cin, task[task_count]);
                    task_count++;
                }
                break;
            }
            case 2:
            {
                print_task(task, task_count);
                break;
            }
            case 3:
            {
                int del_task = 0;
                cout<<"Enter A Task to delete:"<<endl;
                cin>>del_task;

                if(del_task < 0 || del_task > 9){
                    cout<<"you Entered Invalid Task No"<<endl;
                }
                for(int i=del_task; i<task_count; i++){
                    task[i] = task[i+1];
                }
                task_count = task_count -1;
                break;
            }
            case 0:
            {
                cout<<" Terminating The Program -----"<<endl;
                break;

            }
            default:
            cout<<"you entered Invalid value"<<endl;
            
        }
    }
}
