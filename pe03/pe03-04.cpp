// pe03-04.cpp -- �ð��� ���� ������Ѵ�
#include <iostream>
using namespace std; 

void main()
{
	const int DAY = 86400;
	const int HOUR = 3600;
	const int MIN = 60;
	long sec, day, hour, min, second;

	cout << "�� ���� �Է��Ͻÿ�: ";
	cin >> sec;

	day = sec / DAY;
	hour = (sec % DAY) / HOUR;
	min = (sec % HOUR) / MIN;
	second = sec % MIN;

	cout << sec << "�� = " << day << "��, " << hour << "��, " 
		 << min << "��, " << second << "��" << endl;
}
