#include <iostream>

using namespace std;

int main() {
	string a, b;

	cin >> a >> b; //만자리 가능한 string은 대략 40억 길이
	//str.max_size()로 확인 가능

	//최대 만자리수로 모든 자리수가 9일경우
	//최대 수는 10,000*10,000*81=8,100,000,000 81억
	//long 약 21억, unsigned long 약 42억, long long 약 922해
	long long result = 0; //long long 사용
	for (int i = 0; i < a.length(); i++) {
		if (a[0] == '0' || b[0] == '0')
			break; //앞자리가 0인 경우는 0밖에 없고 0은 곱해도 0이여서 바로 빠져 나옴
		for (int j = 0; j < b.length(); j++) {
			result += (a[i] - '0') * (b[j] - '0'); //char형이기 때문에 int형으로 표현하기 위해 '0'빼줌
		}
	}

	cout << result;


	return 0;
}