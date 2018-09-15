//============================================================================
// Name        : calculator-functions.cpp
// Author      : Jacob Folley
//============================================================================

#include <iostream>
using namespace std;
#include <math.h>


int addition(float num1, float num2) {
	//do addition
	
	float result = num1 + num2;
	cout << "The answer is: " << result << endl;

	return 0;
}

int subtraction(float num1, float num2) {
	//do subtraction

	float result = num1 - num2;
	cout << "The answer is: " << result << endl;

	return 0;
}

int multiplication(float num1, float num2) {
	//do multiplication
	
	float result = num1 * num2;
	cout << "The answer is: " << result << endl;

	return 0;
}

int division(float num1, float num2) {
	//do division
	
	if (num2 == 0)
	{
		float result = 0;
	}
	else
	{
		float result = num1 / num2;
		cout << "The answer is: " << result << endl;
	}

	return 0;
}

int squareRoot(float num1, float num2) {
	//do squareRoot
	
	float result = sqrt(num1);
	cout << "The answer is: " << result << endl;

	return 0;
}

int cubeRoot(float num1, float num2) {
	//do cubeRoot
	
	float result = cbrt(num1);
	cout << "The answer is: " << result << endl;

	return 0;
}

int power(float num1, float num2) {
	//do power
	
	float result = pow(num1, 2);
	cout << "The answer is: " << result << endl;

	return 0;
}

int cubed(float num1, float num2) {
	//do cubed
	
	float result = pow(num1, 3);
	cout << "The answer is: " << result << endl;

	return 0;
}

void showMenu() {

	cout << "Enter your choice (1/2/3/4/5/6/7/8): " << endl;
	cout << "1. Addition " << endl;
	cout << "2. Subtraction " << endl;
	cout << "3. Multiply " << endl;
	cout << "4. Divide " << endl;
	cout << "5. Square Root " << endl;
	cout << "6. Cube Root " << endl;
	cout << "7. Squared " << endl;
	cout << "8. Cubed " << endl;
	
}



int main() {
	float num1;
	float num2;
	int choice; 

	showMenu(); 
	cin >> choice; 

	switch (choice) {
	case 1:
		cout << "Enter first number: " << endl;
		cin >> num1;

		cout << "Enter second number: " << endl;
		cin >> num2;

		addition(num1, num2);
		break;
	case 2:
		cout << "Enter first number: " << endl;
		cin >> num1;

		cout << "Enter second number: " << endl;
		cin >> num2;

		subtraction(num1, num2);
		break;
	case 3:
		cout << "Enter first number: " << endl;
		cin >> num1;

		cout << "Enter second number: " << endl;
		cin >> num2;

		multiplication(num1, num2);
		break;
	case 4:
		cout << "Enter first number: " << endl;
		cin >> num1;

		cout << "Enter second number: " << endl;
		cin >> num2;

		division(num1, num2);
		break;
	case 5:
		cout << "Enter number: " << endl;
		cin >> num1;

		squareRoot(num1, num2);
		break;
	case 6:
		cout << "Enter number: " << endl;
		cin >> num1;

		cubeRoot(num1, num2);
		break;
	case 7:
		cout << "Enter number: " << endl;
		cin >> num1;

		power(num1, num2);
		break;

	case 8:
		cout << "Enter number: " << endl;
		cin >> num1;

		cubed(num1, num2);
		break;
	default:
		//Option not valid
		cout << "Not Valid" << endl;
	}
	return 0;
}

