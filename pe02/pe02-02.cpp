// pe02-02.cpp -- ������ ų�ι��ͷ� ��ȯ�Ѵ�
#include <iostream>
using namespace std;
int main()
{
	float miles, km;
	
	cout << "�Ÿ��� ���� ������ �Է��Ͻʽÿ�: ";
	cin >> miles;
    km = miles * 1.60934;	// ������ ų�ι��ͷ� ȯ��
	cout << miles << " ������ " << km << " ų�ι����Դϴ�.\n";
	return 0;
}
