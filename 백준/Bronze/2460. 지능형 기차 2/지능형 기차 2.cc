#include <iostream>
using namespace std;

int main()
{
	int count = 10; 
	int total = 0, max = 0;

	while (count--)
	{
		int out = 0, in = 0;
		cin >> out >> in;

		total = total - out +in;

		if (max < total)
			max = total;
	}

	cout << max;
}