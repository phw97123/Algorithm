#include <iostream>
using namespace std;
int main()
{
	long long N; int B; int digits = 0;
	char arr[20];
	string dchar = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin >> N >> B;
	while (N != 0)
	{
		arr[digits++] = dchar[N % B];
		N /= B;
	}
	for (int i = digits - 1; i >= 0; i--) cout << arr[i];
}