#include <iostream>

using namespace std;

int main()
{
	int n;
	int arr[1002];
	int maxScore = 0;
	float newScore = 0;
	float result = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		maxScore = max(maxScore, arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		newScore = (float)arr[i] / maxScore * 100;
		result += newScore;
	}
	result = result  / n; 
	
	cout << result; 
}

