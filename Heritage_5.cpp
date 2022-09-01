#include<iostream>
using namespace std;

class A{
  private:
  	int id;
  	string name, role; 
  
  public:
  	void setA(int id, string name, string role){
  		this->id = id;
  		this->name = name;
  		this->role = role;
	}
	
	void getA(){
		cout << "Employee ID: " << id << endl;
		cout << "Employee Name: " << name << endl;
		cout << "Employee Role: " << role << endl;
	}
};

class B: public A{
  private:
  	int salary, exp;
  public:
  	void setB(int id, string name, string role, int salary, int exp){
  		setA(id, name, role);
		this->salary = salary;
		this->exp = exp;	
	}
  	void getB(){
  		getA();
		cout << "Employee Salary: " << salary << endl;
		cout << "Employee Expirence: " << exp << endl;	
	}
};

class C: public B{
  private:
  	string c_name, add;
  public:
  	void setC(int id, string name, string role, int salary, int exp, string c_name, string add){
  		setB(id, name, role, salary,exp);
		this->c_name = c_name;
		this->add = add;	
	}
	void getC(){
		getB();
		cout << "Employee Company Name: " << c_name << endl;
		cout << "Employee Address: " << add << endl;
	}
};

class D: public C{
  private:
  	string email, mobile;
  public:
  	void setD(){
  		int id, salary, exp;
  		string name, role, c_name, add;
  		cout << "Enter Employee ID: ";
  		cin >> id;
  		cout << "Enter Employee Name: ";
  		cin >> name;
  		cout << "Enter Employee Role: ";
  		cin >> role;
  		cout << "Enter Employee Salary: ";
  		cin >> salary;
  		cout << "Enter Employee Experience: ";
  		cin >> exp;
  		cout << "Enter Employee Company Name: ";
  		cin >> c_name;
  		cout << "Enter Employee Company Address: ";
  		cin >> add;
  		cout << "Enter Employee Email: ";
  		cin >> email;
  		cout << "Enter Employee Contact: ";
  		cin >> mobile;
  		setC(id, name, role, salary, exp, c_name, add);
	}
	
	getD(){
		getC();
		cout << "Employee Email: " << email << endl;
		cout << "Employee Contact: " << mobile << endl;
	}
};

int main(){
	D d;
	d.setD();
	cout << "Calling method of Class A with object of class D" << endl;
	d.getA();
	cout << endl;
	d.getD();
}
