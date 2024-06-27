#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num[9]; 
	int total = 0; 
	for (int i = 0; i < 9; i++)
	{
		cin >> num[i]; 
		total += num[i]; 
	}

	sort(num, num + 9); 

	for (int i = 0; i < 8; i++)
	{
		for (int j = 1; j < 9; j++)
		{
			if (total - (num[i] + num[j])  == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k == i || k == j) continue; 
					cout << num[k] << endl;
				}
				return 0;
			}
		}
	}
}
