#include <iostream>
using namespace std;

class Square{
  private: 
    int num;
  public:
  	void setNumSquare(int num){
  		this->num = num;
	}
	void getSquare(){
		cout << "The squre of " << num << " is :" << num*num << endl; 
	}
};


class Cube{
  private: 
    int num;
  public:
  	void setNumCube(int num){
  		this->num = num;
	}
	void getCube(){
		cout << "The cube of " << num << " is :" << num*num*num << endl; 
	}
};

class SquareNCube: public Square, Cube{
  public:
  	void setNum(int num){
  		setNumSquare(num);
		setNumCube(num);	
	}
	
	void getSquareNCube(){
		getSquare();
		getCube();
	}
};

int main(int a)
{
    SquareNCube sc; int n;
    cout << "Enter number: ";
    cin >> n;
    sc.setNum(n);
    sc.getSquareNCube();
}
