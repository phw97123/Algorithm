#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	while (true)
	{
		int arr[3]; 
	
		for (int i = 0; i < 3; i++)
			cin >> arr[i]; 
		
		sort(arr, arr + 3); 

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			break; 

		if ((arr[0] * arr[0]) + (arr[1] * arr[1]) == (arr[2] * arr[2]))
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';
	}
}

