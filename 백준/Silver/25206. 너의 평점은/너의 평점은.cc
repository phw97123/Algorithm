#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, double> m{ {"A+", 4.5},{"A0", 4.0},{"B+", 3.5},
		{"B0", 3.0},{"C+", 2.5},{"C0", 2.0},{"D+",1.5},{"D0",1.0},{"F",0.0}};

	double tmp = 0; 
	double totalUnit = 0; 
	int cnt = 0; 
	for (int i = 0; i < 20; i++)
	{
		string s;
		double unit;
		string rating;

		cin >> s>> unit>> rating;

		if (rating == "P")
		{
			cnt++; 
			continue; 
		}
		totalUnit += unit; 
		tmp += (unit * m[rating]); 
	}

	cout << tmp / totalUnit;
}