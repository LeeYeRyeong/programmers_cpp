#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solution(vector<string>s1, vector<string> s2) {
	int answer = 0;
	for (int i = 0; i < s1.size(); i++) {
		for (int j = 0; j < s2.size(); j++) {
			if (s1[i] == s2[j]) answer++;
		}
	}
	return answer;
}

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	vector<string> s1(n1), s2(n2);
	for (int i = 0; i < n1; i++) cin >> s1[i];
	for (int i = 0; i < n2; i++) cin >> s2[i];
	cout << solution(s1, s2);

	return 0;
}