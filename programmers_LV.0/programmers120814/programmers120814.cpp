#include <iostream>
using namespace std;

int solution(int n) {
	int answer = (n % 7 == 0 ? n / 7 : n / 7 + 1);
	return answer;
}

int main()
{
	int n;
	cin >> n;
	cout << solution(n);

	return 0;
}