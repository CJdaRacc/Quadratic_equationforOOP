#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

		double a, b, c, sol1, sol2;
			cout << "please gib input plz" << endl;
			cin >> a, b ,c; 
			
			
			sol1 = 0;
			sol2 = 0; 
			// value** means value to the power of number 
			
			sol1 = (-b + pow(b,2) -4*a*c)/(2*a);
			sol2 = (-b - pow(b,2) -4*a*c)/(2*a);
			
		cout << "solution 1: " << sol1 << endl << "solution 2: " << sol2 << endl;


	
}
