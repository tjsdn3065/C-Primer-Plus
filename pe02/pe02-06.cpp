// pe02-06.cpp -- ������ õ�� ������ ��ȯ�Ѵ�
#include <iostream>
using namespace std; 
double convert(double);
int main()
{
	double light_years, astronomical_unit;
	cout << "���� ���� �Է��ϰ� Enter Ű�� �����ʽÿ�: ";
	cin >> light_years;
	astronomical_unit = convert(light_years);
	cout << light_years << " ������ " << astronomical_unit << " õ�� �����Դϴ�.\n";
    return 0;
}

double convert(double light_yr)
{
	double astro_unit;			// õ�� ����
	astro_unit = light_yr * 63240;		// ȯ�� ����
	return astro_unit;
}
