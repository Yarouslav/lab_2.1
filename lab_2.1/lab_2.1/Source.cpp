// Lab_2.1.cpp
// <������ �������>
// ����������� ������ � 2
// ˳��� ��������
// ������ 21

#include <iostream>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.0); // ����� �
	double a; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "a = "; cin >> a;
	// ���������� �� ������ ������
	z1 = 2 * pow(sin((3 * Pi) - (2 * a)), 2) * pow(cos((5 * Pi) + (2 * a)), 2);
	// ���������� �� ����� ������
	z2 = 1.0/4 - 1.0/4 * sin((5.0/2 * Pi) - (8 * a));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}