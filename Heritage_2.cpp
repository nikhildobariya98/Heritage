#include <iostream>
#include <string>

using namespace std;

class Animal {
  public: 
	int age;
    string name,country;
};

class Zebra : public Animal {
  public:
  	void set_value(){
  		cout << "Enter name of Animal: ";
  		cin >> name ;
		 
		cout << "Enter age of Animal: ";
  		cin >> age;
		  
		cout << "Enter country of Animal: ";
  		cin >> country;	
  		
	}
    void get_value(){
    	cout<<"animal Name : "<<name;
    	cout<<endl<<"Animal Age : "<<age;
    	cout << endl << "Animal Country : "<<country;
    }

};

class Dolphin : public Animal{

  public :
	void set_value(){
		
  		cout << "Enter name of Animal: ";
  		cin >> name ;
		 
		cout << "Enter age of Animal: ";
  		cin >> age;
		  
		cout << "Enter country of Animal: ";
  		cin >> country;	
	}
    void get_value() {
    	cout <<"animal Name : "<<name;
    	cout<<endl<<"Animal Age : "<<age;
    	cout << endl << "Animal Country : "<<country;
	}
};

main(){
	Zebra z; Dolphin d;
	z.set_value();
	cout << endl;
	z.get_value();
	cout << endl;
	d.set_value();
	cout << endl;
	d.get_value();
}
