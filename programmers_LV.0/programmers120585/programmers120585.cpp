#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> array, int height) {
	int answer = 0;
	for (int i = 0; i < array.size(); i++) {
		if (array[i] > height) answer++;
	}
	return answer;
}

int main()
{
	vector<int> array(100);
	int height, n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> array[i];
	cin >> height;
	cout << solution(array, height);

	return 0;
}