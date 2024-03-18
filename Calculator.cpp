#include <iostream>
using namespace std;

enum enOperation { addition = 1, subtraction = 2, multiplication = 3, division = 4, modulus = 5, Exit = 6 };

void ReadNumbers(double& number1, double& number2) {

	cout << "Enter number1 : ";
	cin >> number1;
	cout << "Enter number2 : ";
	cin >> number2;

}

enOperation ReadOperation() {

	int operation;

	cout << "(1) + \n";
	cout << "(2) - \n";
	cout << "(3) * \n";
	cout << "(4) / \n";
	cout << "(5) % \n";
	cout << "(6) Exit \n";
	cout << "Choose the operation: ";
	cin >> operation;

	return enOperation(operation);

}

void Addition() {

	double number1, number2;
	ReadNumbers(number1, number2);

	cout << "The result of the addition= " << number1 + number2 << endl;

}


void Subtraction() {

	double number1, number2;
	ReadNumbers(number1, number2);

	cout << "The result of the subtraction= " << number1 - number2 << endl;

}


void Multiplication() {

	double number1, number2;
	ReadNumbers(number1, number2);

	cout << "The result of the multiplication= " << number1 * number2 << endl;;

}


void Division() {

	double number1, number2;
	ReadNumbers(number1, number2);

	if (number2 == 0)
		cout << "Math error:- No Division by Zero" << endl;
	else
		cout << "The result of division= " << number1 / number2 << endl;

}


void Modulus() {

	int intNumber1, intNumber2;
	double number1, number2;

	ReadNumbers(number1, number2);

	intNumber1 = int(number1);
	intNumber2 = int(number2);

	if (number2 == 0)
		cout << "Math error:- No modulus by Zero" << endl;

	else if (intNumber1 != number1 || intNumber2 != number2)
		cout << "Math error:- Numbers must be Integers(without fractions) " << endl;

	else
		cout << "The result of modulus= " << intNumber1 % intNumber2 << endl;

}
bool AnotherOperation() {

	char again;
	do {
		cout << "\nAnother operation? (Y/N) : ";
		cin >> again;

		if (again == 'y' || again == 'Y') {
		system("cls");
		return true;
	}

		else if (again == 'n' || again == 'N') {
			cout << "\nHave a good day :) \n";
			exit(0);
		}

		else
			cout << "\nWrong choice, please choose (Y/N)\n";

	} while (true);

	

}

void Caclculator(){

	
	do {

		switch (ReadOperation()) {

		case addition:

			Addition();
			break;

		case subtraction:

			Subtraction();
			break;

		case multiplication:

			Multiplication();
			break;

		case division:

			Division();
			break;

		case modulus:

			Modulus();
			break;

		case Exit:
			cout << "\nHave a good day :) \n";
			exit(0);

		default:
			system("cls");
			cout << "Wrong choice\n";
			cout << "Please choose from the list \n";
			Caclculator();
		}

		 


	} while (AnotherOperation());

}


void StartCalculator() {

	bool again;

	cout << "WELCOME TO YOUR CALCULATOR :-)\n";
	cout << "********************************************\n";
	
	Caclculator();


}


int main()
{

	StartCalculator();
	return 0;


}

