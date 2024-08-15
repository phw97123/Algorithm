#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int m = b + 15;
	int t = a - 1;

	if (t < 0)
		t = 23;
	if (m >= 60)
	{
		t += 1;
		m -= 60;
	}
	if (t == 24)
		t = 0; 

	cout << t << " " << m;
}

