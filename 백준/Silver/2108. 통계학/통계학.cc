#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[500003];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	// 산술 평균
	double tmp = 0;
	for (int i = 0; i < n; i++)
	{
		tmp += arr[i];
	}

	int ans = round(tmp / n);
	if (ans == 0) ans = 0;
	cout << ans << '\n';

	// 중앙값
	stable_sort(arr, arr + n);
	cout << arr[n / 2] << '\n';

	// 최빈값
	map<int, int> map;
	vector<int> modes;
	int maxCnt = 0;

	for (int i = 0; i < n; i++)
		map[arr[i]]++;

	for (auto& p : map)
	{
		if (p.second > maxCnt)
		{
			maxCnt = p.second;
			modes.clear();
			modes.push_back(p.first);
		}
		else if (p.second == maxCnt)
		{
			modes.push_back(p.first);
		}
	}

	sort(modes.begin(), modes.end()); 

	if (modes.size() > 1)
		cout << modes[1] << '\n';
	else
		cout << modes[0] << '\n';

	// 범위 
	cout << arr[n - 1] - arr[0] << '\n';
}