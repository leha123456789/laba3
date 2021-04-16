#include "Function.h"
using namespace std;
void Func::DataReading(Muz* arr,int &offside,char*filename)
{	
	ifstream f(filename);
	int N=0;
	f>>N;
	offside=N;
	if ((N>1000)&&(N<0)){
	cout<<"Файл переполнен"<<endl;
	}
	else{
	for (int i=0;i<N;i++){
	f>>arr[i];
	arr[i].print();
	}
	cout << "Данные считаны!" << endl;
}
f.close();
}
void Func::DataChange(Muz* arr,int &offside)
{
	string album;
	int year;
	string track;
	int _n;
	cout<<"Введите номер нужного элемента (от 1 до "<<offside<<"):"; 
	cin>>_n;
	_n--;
	if (_n>=0 && _n<=offside){
	cout<<"Введите новый альбом:";
	cin>>album;
	arr[_n].set_album(album);
	cout<<"Введите новый год выхода:";
	cin>>year;
	arr[_n].set_year(year);
	cout<<"Введите новый трек:";
	cin>>track;
	arr[_n].set_track(track);
	for(int a=0;a<offside;a++){
	arr[a].print();
	}
	}
	
else
	cout<<"Номер введен неверно!"<<endl;
}
void Func::AddData(Muz* arr, int &offside)
{
	string album;
	int year;
	string track;
	arr[offside];	
	cout<<"Введите новый альбом:";
	cin>>album;
	arr[offside].set_album(album);
	cout<<"Введите новый год выхода:";
	cin>>year;
	arr[offside].set_year(year);
	cout<<"Введите новый трек:";
	cin>>track;
	arr[offside].set_track(track);
	cout<<"Данные добавлены!"<<endl;
	offside++;
}
void Func::Search(Muz* arr,int &offside)
{
	int _n;
	cout<<"Введите номер нужного элемента (от 1 до "<<offside<<"):"; 
	cin>>_n;
	_n--;
	if (_n>=0 && _n<=offside){
	arr[_n].print();
	}
}
void Func::SaveData(Muz* arr, int &offside, char*filename)
{
	ofstream of(filename);
	of<<offside<<endl;
	for(int i=0;i<offside;i++){
	of<<arr[i];
	}
	of.close();
	cout<<"Данные сохранены в файл"<<filename<<endl;
}
void Func::DeleteData(Muz* arr, int &offside)
{
	int _n;
	arr[offside];
	cout<<"Введите номер нужного элемента (от 1 до "<<offside<<"):";
	cin>>_n;
	_n--;
	for (int i=_n;i<offside;i++){
	arr[i]=arr[i+1];
	}
	offside--;
}
