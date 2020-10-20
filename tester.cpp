#include <iostream>
#include "Shape.h"
using namespace std;

int main() {

	Shape* anyShape = new Shape("aShape");
	// &anyShape = new Shape("aShape");
	
	//--------------------------------------------------------------------
	
	// test Shape: getArea, print
	
	cout << endl;
	cout << "------" << endl;
	cout << "Shape:" << endl;
	cout << "------" << endl;

	// test Shape getArea()
	cout << "Shape area: " << anyShape->getArea() << endl;

	// test Shape print()
	cout << "Print Shape: " << endl;
	anyShape->print(); 

	//--------------------------------------------------------------------
	
	// test Circle: getArea, print
	
	cout << endl;
        cout << "-------" << endl;
        cout << "Circle:" << endl;
        cout << "-------" << endl;

	//--------------------------------------------------------------------
	
	// test Triangle: getArea, print
	
	cout << endl;
	cout << "---------" << endl;
	cout << "Triangle:" << endl;
	cout << "---------" << endl;

	//--------------------------------------------------------------------
	
	// test Rectangle: getArea, print
	
	cout << endl;
	cout << "-------" << endl;
	cout << "Rectangle:" << endl;
	cout << "-------" << endl;

	//--------------------------------------------------------------------
	
	return 0;
}