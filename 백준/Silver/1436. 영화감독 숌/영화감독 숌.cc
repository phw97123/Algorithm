#include <iostream>
#include <string> 

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int answer = 0; 
	int cnt = 0;
	int i = 1; 
	while (cnt != n)
	{
		i++; 
		if (to_string(i).find("666") != string::npos)
		{
			cnt++;
			if (cnt == n)
			{
				cout << i;
				break;
			}
		}
	}
}
