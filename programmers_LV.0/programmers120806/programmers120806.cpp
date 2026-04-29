#include <iostream>
using namespace std;

int solution(int num1, int num2) {
	double div = static_cast<double>(num1) / num2;
	int answer = div * 1000;
	return answer;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << solution(a, b);

	return 0;
}