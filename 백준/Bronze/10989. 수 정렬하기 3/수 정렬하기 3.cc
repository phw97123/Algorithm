#include <iostream>

using namespace std;

int arr[10001];

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 

	int n;
	cin >> n;

	int maxNum = 0; 

	for (int i = 0; i < n; i++)
	{
		int a; 
		cin >> a; 

		arr[a]++; 
	}

	for (int i = 1; i <10001; i++)
	{
		for(int j = 0; j<arr[i]; j++)
		{
			cout << i << '\n';
		}
	}
}
