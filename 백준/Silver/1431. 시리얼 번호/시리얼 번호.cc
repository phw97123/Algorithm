#include<bits/stdc++.h>

using namespace std;

bool cmp(const string& a, const string& b)
{
	if (a.size() != b.size())
	{
		return a.size() < b.size();
	}
	else
	{
		int aSum = 0;
		int bSum = 0;
		for (int i = 0; i < a.size(); i++)
		{
			if(isdigit(a[i]))
				aSum += a[i] - '0'; 
			if(isdigit(b[i]))
				bSum +=b[i] - '0'; 
		}

		if (aSum != bSum)
			return aSum < bSum;
		else 
			return a < b;
	}
}

int main()
{
	int N;
	cin >> N;

	vector<string> nums;
	while (N--)
	{
		string num;
		cin >> num;
		nums.push_back(num);
	}

	sort(nums.begin(), nums.end(), cmp);

	for (auto num : nums)
	{
		cout << num << '\n';
	}
}