#include <iostream>

using namespace std;

int main() {
	string a, b;

	cin >> a >> b; //���ڸ� ������ string�� �뷫 40�� ����
	//str.max_size()�� Ȯ�� ����

	//�ִ� ���ڸ����� ��� �ڸ����� 9�ϰ��
	//�ִ� ���� 10,000*10,000*81=8,100,000,000 81��
	//long �� 21��, unsigned long �� 42��, long long �� 922��
	long long result = 0; //long long ���
	for (int i = 0; i < a.length(); i++) {
		if (a[0] == '0' || b[0] == '0')
			break; //���ڸ��� 0�� ���� 0�ۿ� ���� 0�� ���ص� 0�̿��� �ٷ� ���� ����
		for (int j = 0; j < b.length(); j++) {
			result += (a[i] - '0') * (b[j] - '0'); //char���̱� ������ int������ ǥ���ϱ� ���� '0'����
		}
	}

	cout << result;


	return 0;
}