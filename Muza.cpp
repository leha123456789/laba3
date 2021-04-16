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
	<< "(6)Удаление данных"<< endl
	<< "Ваш выбор:";
	cin >> _stateMenu;
}
int main(int argc, char*argv[]){
Muz ms;
Func ns;
Menu();
int k =100;
Muz *arr;
int arr_offside=0;
arr=new Muz[k];
while (_stateMenu !=0)
{
	switch(_stateMenu)
	{
	case 1:
			ns.DataReading(arr,arr_offside, argv[1]);
		Menu();
		break;
	case 2:
			ns.DataChange(arr, arr_offside);
		Menu();
		break;
	case 3:
			ns.AddData(arr, arr_offside);
		Menu();
		break;
	case 4:
			ns.Search(arr,arr_offside);
		Menu();
		break;
	case 5:
			ns.SaveData(arr,arr_offside,argv[1]);
		Menu();
		break;
	case 6:
			ns.DeleteData(arr,arr_offside);
		Menu();
		break;

	}
}
cout<<"Работа завершена!"<<endl;
}
