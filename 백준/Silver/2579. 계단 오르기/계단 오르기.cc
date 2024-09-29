#include <iostream>

using namespace std;

// 최대 두 계단씩 오를 수 있다. 
// 연속된 세개의 계단을 모두 밟아서는 안된다. 
// 마지감 계단은 반드시 밟아야 한다. 

// 흐름 
// 1. 마지막 계단까지 가는 방법 
// - 한칸 전에서 올라오기 dp[i-1] 
// - 두칸 전에서 올라오기 dp[i-2]
// 2. 마지막 계단에 올 때 점수 구하는 방법 
// - 한칸 전에서 올라오기 (3칸은 못 밟음) 
// dp[i] = dp[i-3] + score[i-1] + scroe[i]; 
// - 두칸 전에서 올라오기 
// dp[i] = dp[i-2] + score[i]; 
// 3. 정답으로 향하는 식 도출하기
// dp[i] = max( dp[i-3] + score[i-1] + scroe[i], dp[i-2] + score[i] );  

int dp[302];
int score[302];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> score[i];
	}

	if (n == 1)
	{
		cout << score[0];
		return 0;
	}

	dp[0] = score[0];
	dp[1] = score[0] + score[1];
	if (n > 2)
		dp[2] = max(score[0] + score[2], score[1] + score[2]);

	for (int i = 3; i < n; i++)
	{
		dp[i] = max(dp[i - 3] + score[i - 1] + score[i], dp[i - 2] + score[i]);
	}

	cout << dp[n - 1];
}
