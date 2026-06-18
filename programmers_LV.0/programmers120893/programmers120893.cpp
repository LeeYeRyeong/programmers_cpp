#include <iostream>
#include <string>
using namespace std;

string solution(string my_string) {
	string answer = "";
	for (int i = 0; i < my_string.size(); i++) {
		if (my_string[i] >= 'a' && my_string[i] <= 'z') answer.push_back(my_string[i] - 32);
		else if (my_string[i] >= 'A' && my_string[i] <= 'Z') answer.push_back(my_string[i] + 32);
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