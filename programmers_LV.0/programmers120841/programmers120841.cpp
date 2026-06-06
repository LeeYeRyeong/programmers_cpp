#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> dot) {
	if (dot[0] > 0 && dot[1] > 0) return 1;
	else if (dot[0] < 0 && dot[1] > 0) return 2;
	else if (dot[0] < 0 && dot[1] < 0) return 3;
	else if (dot[0] > 0 && dot[1] < 0) return 4;
}

int main()
{
	vector<int> dot(2);
	cin >> dot[0] >> dot[1];
	cout << solution(dot);

	return 0;
}