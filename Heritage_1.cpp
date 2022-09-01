#include <iostream>
#include <string>
 
using namespace std;

class Mother{
	
	private:
		
		string name;
		int age;
		
    public:
    	
    void setMotherDetail(){

      cout << "Enter the name : ";
      cin >> name;
      
      cout << "Enter the  age: ";
      cin >> age;
      
      }
      
      void displayMother(){
      	
      	cout << "Name: " << name << endl ;
		cout << "Age : "<<age<<endl;      
      	
	  }
};
class Daugther : public Mother {
    public :

    void setDaugtherDetail(){
         setMotherDetail();
         
    }
    
     void displayDaugther(){
     	displayMother();
		    	
	 }
};
int main (){

    Daugther d;

    d.setDaugtherDetail();
    d.displayDaugther();

}

