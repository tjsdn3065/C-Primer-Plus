// pe03-02.cpp -- �� ���� BMI�� ���Ѵ�
#include <iostream>
using namespace std;
int main()
{
	double height_feet;		// Ű���� ��ġ ������ �� ��Ʈ ���� �κ�
	double height_remainder_inches;		// Ű���� ������ ��ġ ���� �κ�
	double weight_pounds;			// �Ŀ�� ������ ü��
	const double INCHES_FEET = 12;		// ��Ʈ�� ��ġ
	const double METERS_INCH = 0.0254;	// ��ġ�� ����
	const double KILOGRAMS_POUND = 2.2;	// �Ŀ��� ų�α׷�
	
	cout << "Ű�� ��ġ ������ ���� ��Ʈ ������ �Է��Ͻʽÿ�: ";
	cin >> height_feet;
	cout << "Ű�� �������� ��ġ ������ �Է��Ͻʽÿ�: ";
	cin >> height_remainder_inches;
	cout << "ü���� �Ŀ�� ������ �Է��Ͻʽÿ�: ";
	cin >> weight_pounds;
	double height_meter = (height_feet * INCHES_FEET + height_remainder_inches) * METERS_INCH;	// ���� ������ Ű
	double mass_kilogram = weight_pounds * KILOGRAMS_POUND;									// ų�α׷� ������ ����
	double bmi = mass_kilogram / (height_meter * height_meter);								// �� ���� ����
	cout << "����� �� ����(BMI)�� " << bmi << "�Դϴ�.\n";
	return 0;
}
