#include <iostream>
#include <string>
using namespace std;

string solution(string my_string, int n) {
	string answer = "";
	for (int i = 0; i < my_string.size(); i++) {
		for (int j = 0; j < n; j++) answer += my_string[i];
	}
	return answer;
}

int main()
{
	string s;
	int n;
	cin >> s >> n;
	cout << solution(s, n);

	return 0;
}