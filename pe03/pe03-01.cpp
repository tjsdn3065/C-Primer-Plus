// pe03-01.cpp -- ��Ƽ���ͷ� �Է¹޾� ���Ϳ� ��Ƽ���ͷ� ����Ѵ�
#include <iostream>
using namespace std;
int main()
{
	int height;
	const int METER = 100;

	cout << "Ű�� ������ ��Ƽ���� ������ �Է��Ͻʽÿ�: ___\b\b\b";
	cin >> height;
	cout << "����� Ű�� " << height/METER << "���� " << height%METER << "��Ƽ�����Դϴ�.\n";
	return 0;
}
