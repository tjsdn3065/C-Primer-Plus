// pe02-05.cpp -- ������ ȭ���� ��ȯ�Ѵ�
#include <iostream>
using namespace std; 
double convert(double);
int main()
{
	double Celsius, Fahrenheit;
	cout << "���� �µ��� �Է��ϰ� Enter Ű�� �����ʽÿ�: ";
	cin >> Celsius;
	Fahrenheit = convert(Celsius);
	cout << "���� " << Celsius << "���� ȭ�� " << Fahrenheit << "���Դϴ�.\n";
    return 0;
}

double convert(double Cel)
{
	double Fah;			// ȭ�� �µ�
	Fah = 1.8 * Cel + 32.0;		// ȯ�� ����
	return Fah;
}
