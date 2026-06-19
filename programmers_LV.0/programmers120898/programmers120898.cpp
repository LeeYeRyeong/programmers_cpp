#include <iostream>
#include <string>
using namespace std;

int solution(string message) {
	int answer = message.size() * 2;
	return answer;
}

int main()
{
	string message;
	getline(cin, message);
	cout << solution(message);

	return 0;
}