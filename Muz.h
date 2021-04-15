#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Muz
{
private:
	string album;
	int year;
	string track;
public:
	Muz();
	Muz(const string& album,const int& year,const string& track);
	void read(istream& listi);
	void set_album(string album_name);
	string get_album();
	void set_year(int year_date);
	int get_year();
	void set_track(string track_name);
	string get_track();
	void Printf(ostream& listo);
	void print();
};
ostream& operator<<(ostream& listo, Muz& ms);
istream& operator>>(istream& listi, Muz& ms);
