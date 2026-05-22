#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int money) {
	vector<int> answer(2);
	answer[0] = money / 5500;
	answer[1] = money - (5500 * answer[0]);
	return answer;
}

int main()
{
	vector<int> answer(2);
	int money;
	cin >> money;
	answer = solution(money);
	for (int i = 0; i < 2; i++) cout << answer[i] << ' ';

	return 0;
}