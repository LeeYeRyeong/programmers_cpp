#include <iostream>
using namespace std;

int solution(int slice, int n) {
	int answer = (n % slice == 0 ? n / slice : n / slice + 1);
	return answer;
}

int main()
{
	int slice, n;
	cin >> slice >> n;
	cout << solution(slice, n);

	return 0;
}