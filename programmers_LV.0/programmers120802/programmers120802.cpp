#include <iostream>
using namespace std;

int solution(int num1, int num2) {
	int answer = num1 + num2;
	return answer;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << solution(a, b);

	return 0;
}