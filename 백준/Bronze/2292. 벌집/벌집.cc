#include <iostream>

using namespace std;

int main()
{

	int n; 
	cin >> n; 
	int result = 1;

	if (n == 1)
	{
		cout << result;
		return 0 ; 
	}

	int min = 2; 
	int max = 7;

	while(true)
	{
		if (n>=min && n<=max)
		{
			cout << result+1;
			break;
		}

		min += 6 * result;
		result++;
		max += 6 * result;
	}
}

