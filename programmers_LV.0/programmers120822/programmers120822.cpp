#include <iostream>
#include <string>
using namespace std;

string solution(string my_string) {
	string answer = my_string;
	for (int i = my_string.size() - 1; i >= 0; i--) answer[my_string.size() - i - 1] = my_string[i];
	return answer;
}
int main()
{
	string my_string, answer;
	cin >> my_string;
	cout << solution(my_string);

	return 0;
}