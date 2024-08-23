#include <iostream>
#include <string> 

using namespace std;

int main()
{
	string s[3]; 
	for (int i = 0; i < 3; i++)
		cin >> s[i];

	int temp = 0; 
	for (int i = 0; i < 3; i++)
	{
		if (isdigit(s[i][0]))
		{
			temp = stoi(s[i]);
			temp = 3 - i + temp; 
			break; 
		}
	}

	if (temp % 3 == 0 && temp % 5 == 0)
		cout << "FizzBuzz";
	else if (temp % 3 == 0)
		cout << "Fizz";
	else if (temp % 5 == 0)
		cout << "Buzz";
	else
		cout << temp; 
}
