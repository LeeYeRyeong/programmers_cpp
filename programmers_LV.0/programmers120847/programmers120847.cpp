#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> numbers) {
	int answer = 1, max = 0, maxIndex = -1;
	for (int i = 0; i < numbers.size(); i++) {
		if (numbers[i] > max) {
			max = numbers[i];
			maxIndex = i;
		}
	}
	answer *= max;
	max = 0; 
	for (int i = 0; i < numbers.size(); i++) {
		if (numbers[i] > max && maxIndex != i) max = numbers[i];
	}
	answer *= max;
	return answer;
}

int main()
{
	int n;
	cin >> n;
	vector <int> numbers(n);
	for (int i = 0; i < n; i++) cin >> numbers[i];
	cout << solution(numbers);

	return 0;
}