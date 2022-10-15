#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class Car {
	//scopes(public-private)

	//private: write in it the attributes of the class created
	//attributes written in the private scope 5as bel class nfso 
	//m2drsh at3amel m3ah 8er gowa el class (m2drsh at3amel m3ah fel main)

private:					
	char name[15];
	char color[10];
	int maxSpeed;
	int model;

	//public: write the functions in it
	//printing, declaring,...variables occur in functions
	//b2dr awsalo mn ay heta (main...)
public:		
  	//constructor
  	Car() {
      strcpy_s(name,"No name");
      strcpy_s(color,"No color");
      maxSpeed=0;
      model=0;
        
    }
	//Setters
	void setName(char n[]) {
		strcpy_s(name, n);
	}
	void setColor(char c[]) {
		strcpy_s(color, c);
	}
	void setMaxSpeed(int s) {
		maxSpeed = s;
	}
	void setModel(int m) {
		model = m;
	}

	//Getters
	char* getName() {
		return name;
	}
	char* getColor() {
		return color;
	}
	int getMaxSpeed() {
		return maxSpeed;
	}
	int getModel() {
		return model ;
	}

	//function to print
	void print() {
		cout << "Name: " << getName() << endl;
		cout << "Color: " << getColor() << endl;
		cout << "Maximum speed: " << getMaxSpeed() << endl;
		cout << "Model: " << getModel() << endl;
	}
};

int main() {
	Car car;					 // Creating an object
	char n[15] = "BMW";
	char c[10] = "Red";
	car.setModel(2022);
	car.setMaxSpeed(250);
	car.setName(n);
	car.setColor(c);
	car.print();
}
