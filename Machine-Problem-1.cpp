#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	
	float a, b, c, A, B, C;
	int a1, a2, a3, d, e, f;
	float area, p, perimeter;
	char start;
	int x, y, z;
	float h1, h2, h3;
 

	
	cout << "This program computes for the interior angles, total area, perimeter, apothem/height, \nand the circumcenter of the triangle. This program also classifies the type of triangle. " << endl;
	

	start:
	cout << "\nInput side AB " << endl;
	cin >> a;
	cout << "Input side BC " << endl;
	cin >> b;
	cout << "Input side CA " << endl;
	cin >> c;

	d = a + b;
	e = a + c;
	f = b + c;
	
	if (d <= c || e <= b || f <= a){
		cout << "Invalid input." << endl;
		cout << "The sum of 2 sides must be greater than the third side " << endl;
		goto start;
	}
	
	else {

	//Formulas
	A = (b*b + c*c - a*a)/(2*b*c);
	B = (c*c + a*a - b*b)/(2*c*a);
	C = (a*a + b*b - c*c)/(2*a*b);
	a1 = acos(A)*180/3.1415; //angles
	a2 = acos(B)*180/3.1415;
	a3 = 180 - (a1+a2);
	perimeter = a + b + c;
	p = perimeter/2;
	area = sqrt(p*(p-a)*(p-b)*(p-c));
	h1 = (2*area)/a; //height
	h2 = (2*area)/b;
	h3 = (2*area)/c;
	x = h1/2;
	y = c*static_cast<double>(sin(a2));

	
	//Classification
	if (a == b && b == c){
		cout << "Equilateral Triangle" << endl;
	}
	else if (a == b || b == c || c == a){
		cout << "Isosceles Triangle" << endl;
	}
	else if (a != b && b != c && c != a){
		cout << "Scalene Triangle" << endl;
	}
	
	if (a1 < 90 && a2 < 90 && a3 < 90){
		cout << "Acute Triangle" << endl;
	}
	else if (a1 == 90 || a2 == 90 || a3 == 90){
		cout << "Right Triangle" << endl;
	}
	else if (a1 > 90 || a2 > 90 || a3 > 90){
		cout << "Obtuse Triangle" << endl;	
	}
	
	cout << "Angle CAB is : " << a1 << " degrees" << endl;
	cout << "Angle ABC is : " << a2 << " degrees" << endl;
	cout << "Angle ACB is : " << a3 << " degrees" << endl;
	cout << "The total area is : " << area << " sq. units" << endl;
	cout << "The total perimeter is : " << perimeter << " units" << endl;
	cout << "The height of the triangle is : " << h1 << endl;

	cout << "The circumcenter of the triangle is located at : " << "(" << x  << "," << y << ")"  << endl;
	
	cout << "\nWould you like to continue? (Y) \nInput any key otherwise" << endl;{
	cin >> start;
}
}
	if (start == 'Y' || start == 'y'){
		goto start;
	}

	else (start == 'N' || start == 'n');
	{
		cout << "Exiting program..." << endl;
		system("pause");
	}

	
	_getch();
	return 0;

}
