#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
	vector<int> answer(num2 - num1 + 1);
	for (int i = num1; i <= num2; i++) answer[i - num1] = numbers[i];
	return answer;
}

int main()
{
	int n, num1, num2;
	cin >> n;
	vector<int> numbers(n);
	for (int i = 0; i < n; i++) cin >> numbers[i];
	cin >> num1 >> num2;
	vector<int> answer(num2 - num1 + 1);
	answer = solution(numbers, num1, num2);
	for (int i = 0; i < answer.size(); i++) cout << answer[i] << ' ';

	return 0;
}