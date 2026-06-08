#include <iostream>
#include <string>
using namespace std;

int solution(string my_string) {
	int answer = 0;
	for (int i = 0; i < my_string.size(); i++) {
		if (my_string[i] >= '0' && my_string[i] <= '9') answer += my_string[i] - '0';
	}
	return answer;
}

int main()
{
	string s;
	cin >> s;
	cout << solution(s);

	return 0;
}