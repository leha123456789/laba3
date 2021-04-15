#pragma once
#include "Muz.h"
using namespace std;
void DataReading(Muz* arr,int &offside,char*filename);
void DataChange(Muz* arr,int &offside);
void AddData(Muz* arr, int &offside);
void Search(Muz* d,int &offside);
void SaveData(Muz* d,int &offside, char*filename);
