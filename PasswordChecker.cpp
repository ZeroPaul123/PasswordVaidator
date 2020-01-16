#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>
#include <stdlib.h>




using namespace std;


bool checkPass(string password) {

	int stringLength = password.length();

	if (stringLength > 4 && stringLength <= 10) {
		if (std::any_of(password.begin(), password.end(), ::isdigit)) {
		
			if (password.find('&') != std::string::npos ||
				password.find('+') != std::string::npos ||
				password.find('*') != std::string::npos ||
				password.find('#') != std::string::npos ||
				password.find('$') != std::string::npos ||
				password.find('%') != std::string::npos
				)
			{
				return true;
			}
			else {
				system("cls");
				cout << "You password must contain a special character" << endl; }
			
		
		}
		else {
			system("cls");
			cout << "You password must contain a number" << endl; }


			
		

	} else {
		system("cls");
		cout << "You password must be between 5 and 11 characters" << endl; }
	
		return false;}



void start() {
	cout << "Please enter a password you want to check:" << endl;
	string userInput;
	cin >> userInput;
	
	if (checkPass(userInput)) {
		
		cout << "Your password is valid \nDo you want to check another password?" << endl;
		cin >> userInput;
		if (userInput == "y" || userInput == "yes") {
			system("cls");

			start();
		}
		else {


			exit(0);
		}
	
	}
	else {
		
		cout << "Your password is insecure\nDo you want to check another password?" << endl;
		cin >> userInput;
		if (userInput == "y" || userInput == "yes") {
			system("cls");

			start();
		}
		else {


			exit(0);
		}

	}

}
int main()
{


	start();

}
