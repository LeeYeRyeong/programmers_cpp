#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<string> strlist) {
	vector<int> answer(strlist.size());
	for (int i = 0; i < strlist.size(); i++) {
		int count = 0;
		for (int j = 0; j < strlist[i].size(); j++) count++;
		answer[i] = count;
	}
	return answer;
}

int main()
{
	int n;
	cin >> n;

	vector<string> strlist(n);
	vector<int> answer(n);
	for (int i = 0; i < n; i++) cin >> strlist[i];
	answer = solution(strlist);
	for (int i = 0; i < n; i++) cout << answer[i] << ' ';

	return 0;
}