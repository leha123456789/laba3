#include "Function.h"
using namespace std;
void DataReading(Muz* arr,int &offside,char*file)
{	
	ifstream f(file);
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
cout<<file;
}
void DataChange(Muz* arr,int &offside)
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
void AddData(Muz* arr, int &offside)
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
void Search(Muz* d,int &offside)
{
	int _n;
	cout<<"Введите номер нужного элемента (от 1 до "<<offside<<"):"; 
	cin>>_n;
	_n--;
	if (_n>=0 && _n<=offside){
	d[_n].print();
	}
}
void SaveData(Muz* d, int &offside, string filename)
{
	ofstream of(filename);
	of<<offside<<endl;
	for(int i=0;i<offside;i++){
	of<<d[i];
	}
	of.close();
	cout<<"Данные сохранены в файл"<<filename<<endl;
}
