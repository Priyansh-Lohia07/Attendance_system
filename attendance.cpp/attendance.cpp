#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Employee
{
    int employee_ID;
    string employee_name;
    string department;
    public:
    Employee(int e,string n,string d)
    {
       employee_ID=e;
       employee_name=n;
       department=d;
    };
    void display_employee(){
        cout<<"Employee ID:"<<employee_ID;
        cout<<endl<<"Employee Name:"<<employee_name;
        cout<<endl<<"Employee Department:"<<department<<endl;
    }
};
class Attendance
{
 int e_ID;
 int date;
 string status;
 public:
 Attendance(int i,int d,string s)
 {
   e_ID=i;
   date=d;
   status=s;

 }
 void display_attendance()
 {
    cout<<"Employee ID:"<<e_ID;
    cout<<endl<<"DATE:"<<date;
    cout<<endl<<"STATUS:"<<status<<endl;
 }
};
class Attendance_manager
{
    vector<Employee> employee;
    vector<Attendance> attendance;
    string name;
    int ID;
    string dep;
    int date1;
    string stat;

public:
    void add_employee()
    {
        cout<<"Enter the employee name:";
        cin>>name;
        cout<<endl<<"Enter the employee ID:";
        cin>>ID;
        cout<<endl<<"Enter the employee department:";
        cin>>dep;
        employee.push_back(Employee(ID,name,dep));
    };
    void display_employees()
    {
       if(employee.empty())
       {cout<<"No employee added!";};
       for(int i=0;i<employee.size();i++)
       {
        employee[i].display_employee();
       }
    };
    void mark_attendance()
    {
        cout<<endl<<"Enter the employee ID:";
        cin>>ID;
        cout<<endl<<"Enter the date(DD/MM/YY):";
        cin>>date1;
        cout<<endl<<"Enter the status(Present/Absent/Leave/Late):";
        cin>>stat;
        attendance.push_back(Attendance(ID,date1,stat));
    }
    void view_attendance()
    {
      if(attendance.empty())
      {
        cout<<"No attendance record found!";
       };
      for(int j=0;j<attendance.size();j++)
      {
        attendance[j].display_attendance();
      }
    };
};
int main()
{
    Attendance_manager manager;
    int choice;
   do{
    cout<<endl<<"======ATTENDANCE MANAGEMENT SYSTEM ======"<<endl;
    cout<<"1. ADD NEW EMPLOYEE --"<<endl;
    cout<<"2. DISPLAY EMPLOYEES --"<<endl;
    cout<<"3. MARK ATTENDANCE --"<<endl;
    cout<<"4. VIEW ATTENDANCE --"<<endl;
    cout<<"5. EXIT -"<<endl;
   
   
    cout<<"Enter choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
             manager.add_employee();
             break;
        case 2:
             manager.display_employees();
             break;
        case 3:
             manager.mark_attendance();
             break;
        case 4:
             manager.view_attendance();
             break;
        case 5:
             cout<<"EXITING...";
             break;
        default:
             cout<<"INVALID CHOICE..";
             
    }
}while(choice != 5) ;
return 0;
};
