#pragma once
#include "Muz.h"
using namespace std;
void DataReading(Muz* arr,int &offside,string filename);
void DataChange(Muz* arr,int &offside);
void AddData(Muz* arr, int &offside);
void Search(Muz* d,int &offside);
void SaveData(Muz* d,int &offside, string filename);
