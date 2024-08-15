#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	int array[10];
	set<int> s; 

	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
		s.insert(array[i] % 42); 
	}

	cout << s.size(); 
}

