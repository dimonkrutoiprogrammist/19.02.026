#include <iostream>
#include "student.h"
using namespace std;


	
void Fraction::InputNumerator() {
	cout << "Ââåäèòå ÷èñëèòåëü - - - - ";
	cin >> numerator;
}

void Fraction::InputDenominator() {
	cout << "Ââåäèòå çíàìåíàòåëü - - - - ";
	cin >> denominator;
}

void Fraction::Plus() {
	cout << "Ñëîæåíèå - - - " << numerator + denominator << endl;
}

void Fraction::Minus() {
	cout << "Âû÷èòàíèå- - - " << numerator - denominator << endl;
}

void Fraction::Multiplication() {
	cout << "Óìíîæåíèå - - - " << numerator * denominator << endl;
}

void Fraction::Division() {
	cout << "Äåëåíèå - - - " << numerator / denominator << endl;
}
