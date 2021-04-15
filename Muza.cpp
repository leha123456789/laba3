#include "Function.h"
using namespace std;
int _stateMenu;
void Menu(){
	cout << "Выберите действие:" << endl
	<< "(0)Выход из программы" << endl
	<< "(1)Ввод/Вывод принятых данных" << endl
	<< "(2)Изменение данных" << endl
	<< "(3)Добавление данных" << endl
	<< "(4)Поиск" << endl
	<< "(5)Сохранение данных" << endl
	<< "Ваш выбор:";
	cin >> _stateMenu;
}
int main(int argc,char* argv[]){
Muz ms;
Menu();
string filename;
int n;
int k =100;
Muz *arr;
int arr_offside=0;
arr=new Muz[k];
while (_stateMenu !=0)
{
	switch(_stateMenu)
	{
	case 1:
		{
			DataReading(arr,arr_offside, argv[1]);
		}
		break;
	case 2:
			DataChange(arr, arr_offside);
			
		break;
	case 3:
			AddData(arr, arr_offside);
		break;
	case 4:
			Search(arr,arr_offside);
		break;
	case 5:
			SaveData(arr,arr_offside,"f.txt");
		break;

	}
}
cout<<"Работа завершена!"<<endl;
}
