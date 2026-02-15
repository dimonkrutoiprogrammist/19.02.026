#include <iostream>
#include "student.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	Fraction fraction_1;

	cout << "Ââîä äàííûõ äðîáè" << endl;
	fraction_1.InputNumerator();
	fraction_1.InputDenominator();

	cout << "Ìàòåìàòè÷åñêèå îïåðàöèè" << endl;
	fraction_1.Plus();
	fraction_1.Minus();
	fraction_1.Multiplication();
	fraction_1.Division();


	return 0;
}
