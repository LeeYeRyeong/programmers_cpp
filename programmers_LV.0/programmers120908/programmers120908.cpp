#include <iostream>
#include <string>
using namespace std;

int solution(string str1, string str2) {
	int answer = 2, size = 0;
	for (int i = 0; i < str1.size() - str2.size() + 1; i++) {
		if (str1[i] == str2[0]) {
			for (int j = 0; j < str2.size(); j++) {
				if (str1[i + j] == str2[j]) size++;
				else {
					size = 0;
					break;
				}
			}
		}
		if (size == str2.size()) {
			answer = 1;
			break;
		}
	}
	return answer;
}

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	cout << solution(str1, str2);

	return 0;
}