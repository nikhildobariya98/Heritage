#include <iostream>
#include <string>

using namespace std;

 class A{

 public :

   int id,salary,contact,email,exp;

   void GetData (){

      cout << "Enter Employee ID : ";
      cin >> id;
      cout << "Enter Employee Salary : ";
      cin >> salary;
      cout << "Enter Employee Contact : ";
      cin >> contact;
      cout << "Enter Employee Email : ";
      cin >> email;       
      cout << "Enter Experince: ";
	  cin >> exp;
   }
 
 };

 class B{
    public :
    
    string name,location ,company_name;

    void GetData (){

      cout << "Enter Employee Name : ";
      cin >> name;

      cout << "Enter Employee Location : ";
      cin >> location;
      
   	  cout << "Enter Company Name: ";
	  cin >> company_name;


    }
 };

 class c:public A,public B{

    public:

    void PutData (){

      cout << "Employee Record : "<<endl<<endl;
      
      cout << "Employee ID : "<<id<<endl;
      cout << "Employee Salary : "<<salary<<endl;
      cout << "Employee Contact : "<<contact<<endl;
      cout << "Employee Email : "<<email<<endl;
      cout << "Enter Experince: "<< endl<<endl;
	  cout << "Enter Company Name: ";

      cout << "Employee Name : " << name<<endl;
      cout << "Employee Location : " << location<<endl;      
      cout << "Enter Company Name: "<<company_name<<endl;

    }
 };

 int main(int argc, char const *argv[])
 {
    c info;

    info.A::GetData();
    info.B::GetData();
    info.PutData();

    return 0;
 }
