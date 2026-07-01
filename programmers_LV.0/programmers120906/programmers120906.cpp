#include <iostream>
#include <string>
using namespace std;

int solution(int n) {
	string s = to_string(n);
	int answer = 0;
	for (int i = 0; i < s.size(); i++) {
		answer += s[i] - '0';
	}
	return answer;
}

int main()
{
	int n;
	cin >> n;
	cout << solution(n);

	return 0;
}