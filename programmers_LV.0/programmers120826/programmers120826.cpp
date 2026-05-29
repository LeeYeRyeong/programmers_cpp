#include <iostream>
#include <string>
using namespace std;

string solution(string my_string, string letter) {
	string answer = "";
	for (int i = 0; i < my_string.size(); i++) {
		if (my_string[i] != letter[0]) answer += my_string[i];
	}
	return answer;
}

int main()
{
	string s, c;
	cin >> s >> c;
	cout << solution(s, c);

	return 0;
}