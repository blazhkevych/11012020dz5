/*
*** Пользователь 	вводит с клавиатуры расстояние, расход 	бензина на 100 км и стоимость трех видов 	бензина.Вывести на экран сравнительную 	таблицу со стоимостью поездки на разных 	видах бензина.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double rasstojanie, rashod_topl, rashod_topl_na1km, stoimost_DT, stoimost_A92, stoimost_A95;
	cout << "Введите предполагаемое расстояние : ";
	cin >> rasstojanie;
	cout << "Введите расход бензина на 100 км. : ";
	cin >> rashod_topl;
	cout << "Введите стоимость \"ДТ\" : ";
	cin >> stoimost_DT;
	cout << "Введите стоимость \"А-92\" : ";
	cin >> stoimost_A92;
	cout << "Введите стоимость \"А-95\" : ";
	cin >> stoimost_A95;
	rashod_topl_na1km = rashod_topl / 100;
	cout << "Cтоимость поездки на расстояние в " << rasstojanie << " км." << ", используя " << "\"ДТ\" - " << rashod_topl_na1km * rasstojanie * stoimost_DT << "грн." << endl;
	cout << "Cтоимость поездки на расстояние в " << rasstojanie << " км." << ", используя " << "\"А-92\" - " << rashod_topl_na1km * rasstojanie * stoimost_A92 << "грн." << endl;
	cout << "Cтоимость поездки на расстояние в " << rasstojanie << " км." << ", используя " << "\"А-95\" - " << rashod_topl_na1km * rasstojanie * stoimost_A95 << "грн." << endl;
}
