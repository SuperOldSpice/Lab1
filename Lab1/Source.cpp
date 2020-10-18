#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ukrainian");
	long double a, V, S;
	cout << "Введiть ребро куба:";
	cin >> a;
	if (a <= 0) 
	{
		cout << "Такий куб не iснує" << "\n" ;
		system("pause");
		return 0;
	}
	
	V = a*a*a;
	S = a * a * 6;
	
	
	cout << "Об'єм куба:" << V << " " << "Площа бiчної поверхнi:" << S << "\n";
	system("pause");
	return 0;
}