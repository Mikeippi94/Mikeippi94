#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float num1;
	float tax;
	float tip;
	float taxtotal;
	float tiptotal;
	num1 = 88.67;
	tip = .20;
	tax = .0675;
	taxtotal = num1 * tax;
	tiptotal = num1 * tip;
	
cout << "tip total:" << tiptotal << endl;

cout << "tax total:" << taxtotal << endl;
	return 0;
}
