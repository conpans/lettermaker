#include "std_lib_facilities.h"
int main()
{
	cout << "Enter the name of the person you want to write to ";
	string first_name; // first_name is a variable of type string
	cin >> first_name;

	cout << "Dear " << first_name << ",\n";
	cout << "\tHow are you? I am fine. I miss you.\n";

	cout << "Enter the name of another friend you'd like to ask about: ";
	string friend_name;
	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	cout << "Is your friend male or female? (enter 'm' for male and 'f' for female) :";
	char friend_sex = '0';
	cin >> friend_sex;

	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	else if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}

	cout << "Enter the age of the recipient.";
	int age;
	cin >> age;

	if (age <= 0 || age >= 110) {
		simple_error("you're kidding!");
	}

	if (age <= 12) {
		cout << "Next year you will be " << age + 1 << ".\n"; //dont for get the (age) goes next to if and if {}
	}
	else if (age == 17) {
		cout << "Next year you would be able to vote.\n";
	}
	else if (age > 70) {
		cout << "I hope you are enjoying retirement.\n";
	}

	cout << "\nYours sincerely, \n\n\n";
	cout << "Lola Mona";
}
