#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list) {
	vector<int> answer(num_list.size());
	for (int i = 0; i < num_list.size(); i++) answer[num_list.size() - i - 1] = num_list[i];
	return answer;
}

int main()
{
	int n;
	cin >> n;
	vector<int> num_list(n), answer(n);
	for (int i = 0; i < n; i++) cin >> num_list[i];
	answer = solution(num_list);
	for (int i = 0; i < n; i++) cout << answer[i] << ' ';

	return 0;
}