#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> array) {
	vector<int> answer(2);
	answer[0] = -1, answer[1] = -1;
	for (int i = 0; i < array.size(); i++) {
		if (answer[0] < array[i]) {
			answer[0] = array[i];
			answer[1] = i;
		}
	}
	return answer;
}

int main()
{
	int n;
	cin >> n;
	vector<int> array(n), answer(2);
	for (int i = 0; i < n; i++) cin >> array[i];
	answer = solution(array);
	for (int i = 0; i < n; i++) cout << answer[i] << ' ';

	return 0;
}