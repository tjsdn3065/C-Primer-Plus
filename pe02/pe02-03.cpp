// pe02-03.cpp -- main()�� �����Ͽ� �� ���� ����� ���� �Լ��� ����Ѵ�
#include <iostream>
using namespace std;
void user1();
void user2();
int main()
{
	user1();
	user1();
	user2();
	user2();
	return 0;
}

void user1()
{
	cout << "Three blind mice\n";
}

void user2()
{
	cout << "See how they run \n";
}
