#include <iostream>
using namespace std;

int solution(int n, int k) {
	int answer = n * 12000 + (k - (n / 10)) * 2000;
	return answer;
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << solution(n, k);

	return 0;
}