//To do list
#include<iostream>
#include<string>
using namespace std;

//Maximum number of tasks
const int MAX_TASKS =100;

//Define a structure for tasks
struct Task
{
string description;
bool isDone;

};
int main()
{
  Task tasks[MAX_TASKS];//Array to store tasks
  //Keep track of the number of tasks
  int numTasks = 0;

  while(true)
    {
      cout<<"To-Do List Application"<<endl;
      cout<<"1.Add task"<<endl;
      cout<<"2.List Task"<<endl;
      cout<<"3.Mark Task as Done"<<endl;
      cout<<"4.Quit"<<endl;

      int choice;
      cin>>choice;

      if(choice ==1)
      {
        //Add Task
        if(numTasks <MAX_TASKS)
        {
          cout<<"Enter Task Description:";
          cin.ignore();//clear the newline character from the list
          getline(cin,tasks[numTasks].description);
          tasks[numTasks].isDone=false;
          numTasks++;
          cout<<"Task Add."<<endl;
        }
        else
        {
          cout<<"Task List is full.Cannot add more tasks."<<endl;
        }
      }
      else if(choice == 2)
      {
        //List tasks
        cout<<"Tasks:"<<endl;
        for(int i=0;i<numTasks;i++)
          {
            cout<<(i+1)<<".";
            if(tasks[i].isDone)
            {
              cout<<"[X]";
            }
            else
            {
              cout<<"[]";
            }
            cout<<"tasks[i].description"<<endl; 
          }
      }
      else if(choice == 3)
      {
        //Mark task as done
        cout<<"Enter the task number tp mark as done:";
        int taskNumber;
        cin>>taskNumber;
        if(taskNumber>0 && taskNumber <= numTasks)
        {
          tasks[taskNumber-1].isDone=true;
          cout<<"Task marked as done."<<endl;
        }
        else
        {
          cout<<"Invalid task number"<<endl;
        }
      }
      else if(choice==4)
      {
        //Quick application
        cout<<"GoodBye!"<<endl;
        break;
      }
      else
      {
        cout<<"Invalid choice.Please try again."<<endl;
      }
      return 0;
    }
}