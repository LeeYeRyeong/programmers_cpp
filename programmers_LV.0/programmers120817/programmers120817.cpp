#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double solution(vector<int> numbers) {
	double answer, sum = 0;
	for (int i = 0; i < numbers.size(); i++) sum += numbers[i];
	answer = sum / numbers.size();
	return answer;
}

int main()
{
	int n;
	cin >> n;
	vector<int> numbers(n);
	for (int i = 0; i < n; i++) cin >> numbers[i];
	cout << fixed << setprecision(1) << solution(numbers);

	return 0;
}