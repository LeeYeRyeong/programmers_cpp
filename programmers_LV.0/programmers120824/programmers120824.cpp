#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list) {
	vector<int> answer = { 0,0 };
	for (int i = 0; i < num_list.size(); i++) {
		if (num_list[i] % 2 == 0) answer[0]++;
		else answer[1]++;
	}
	return answer;
}

int main()
{
	int n;
	cin >> n;
	vector<int> num_list(n), answer(2);
	for (int i = 0; i < n; i++) cin >> num_list[i];
	answer = solution(num_list);
	for (int i = 0; i < 2; i++) cout << answer[i] << ' ';

	return 0;
}