#include <iostream>
using namespace std;

int solution(int angle) {
	if (angle < 90) return 1;
	else if (angle == 90) return 2;
	else if (angle < 180) return 3;
	else if (angle == 180) return 4;
}

int main()
{
	int angle;
	cin >> angle;
	cout << solution(angle);

	return 0;
}