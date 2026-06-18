#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> sides) {
	int answer, max = 0, sum = 0;
	for (int i = 0; i < 3; i++) {
		if (max < sides[i]) {
			sum += max;
			max = sides[i];
		}
		else sum += sides[i];
	}
	answer = (max < sum ? 1 : 2);
	return answer;
}
int main()
{
	vector<int> sides(3);
	for (int i = 0; i < 3; i++) cin >> sides[i];
	cout << solution(sides);

	return 0;
}