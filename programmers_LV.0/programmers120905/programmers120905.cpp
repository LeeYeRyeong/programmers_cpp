#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int n, vector<int> numlist) {
	vector<int> answer;
	for (int i = 0; i < numlist.size(); i++) {
		if (numlist[i] % n == 0) answer.push_back(numlist[i]);
	}
	return answer;
}

int main()
{
	int n, count;
	cin >> n >> count;
	vector<int> numlist(count), answer;
	for (int i = 0; i < count; i++) cin >> numlist[i];
	answer = solution(n, numlist);
	for (int i = 0; i < answer.size(); i++) cout << answer[i] << ' ';

	return 0;
}