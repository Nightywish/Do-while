#include <iostream>
#include <string>
using namespace std;
int main()
{
	string password = "guess";
	string guess;
	do
	{
		cout << "what is the password?";
		cin >> guess;
	} 
	while (guess != password);


}

