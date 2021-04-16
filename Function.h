#pragma once
#include "Muz.h"
using namespace std;
class Func{
public:
void DataReading(Muz* arr,int &offside,char*filename);
void DataChange(Muz* arr,int &offside);
void AddData(Muz* arr, int &offside);
void Search(Muz* arr,int &offside);
void SaveData(Muz* arr,int &offside, char*filename);
void DeleteData(Muz* arr, int &offside,char*filename);
};
