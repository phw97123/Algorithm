#include <iostream>
#include <string>
#include <istream>

using namespace std;

int main()
{
	while (true)
	{
		string n;
		cin >> n;
		if (n == "0") break;

		bool isNum = true;
		int front = 0;
		int back = 0;
		for (int i = 0; i < n.size() / 2; i++)
		{
			front = i;
			back = n.size()-1 - i;

			if (n[front] != n[back])
			{
				cout << "no" << endl;
				isNum = false;
				break;
			}
		}
		if (isNum)
			cout << "yes" << endl;
	}
}

