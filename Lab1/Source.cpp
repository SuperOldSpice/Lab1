#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ukrainian");
	long double a, V, S;
	cout << "����i�� ����� ����:";
	cin >> a;
	if (a <= 0) 
	{
		cout << "����� ��� �� i���" << "\n" ;
		system("pause");
		return 0;
	}
	
	V = a*a*a;
	S = a * a * 6;
	
	
	cout << "��'�� ����:" << V << " " << "����� �i��� �������i:" << S << "\n";
	system("pause");
	return 0;
}