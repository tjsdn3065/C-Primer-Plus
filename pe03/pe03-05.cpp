#include <iostream>
#include <cmath>
using namespace std;
int main () {
    long long worldPopulation, usPopulation = 0;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "���� �α����� �Է��Ͻÿ�: ";
    cin >> worldPopulation;
    cout << "�̱��� �α����� �Է��Ͻÿ�: ";
    cin >> usPopulation;
    cout << "���� �α������� �̱��� �����ϴ� ������ " 
	     << (static_cast<long double>(usPopulation) / (long double)worldPopulation) * 100 << "%�̴�" << endl;
	return 0;
}
