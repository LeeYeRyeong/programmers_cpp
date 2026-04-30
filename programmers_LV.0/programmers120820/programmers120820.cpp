#include <iostream>
using namespace std;

int solution(int age) {
	int answer = 2022 - age + 1;
	return answer;
}

int main()
{
	int age;
	cin >> age;
	cout << solution(age);

	return 0;
}