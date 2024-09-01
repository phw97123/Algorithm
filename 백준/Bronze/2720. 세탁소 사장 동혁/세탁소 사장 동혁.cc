#include <iostream>

using namespace std;

int main()
{	
	int arr[4] = { 25, 10,5, 1 }; 

	int t; 
	cin >> t; 

	for (int i = 0; i < t; i++)
	{
		int c; 
		cin >> c; 
		int tmp = c; 
		int a = 0; 
		for (int i = 0; i < 4; i++)
		{
			tmp = c / arr[i];
			cout << tmp <<' ';
			c %= arr[i]; 
		}
	}
}
