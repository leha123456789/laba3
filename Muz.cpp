#include "Muz.h"
Muz::Muz()
{
	album="";
	year=0;
	track="";
}
Muz::Muz(const string& album1,const int& year1,const string& track1)
{
	album=album1;
	year=year1;
	track=track1;
}
void Muz::print()
{
	cout<<endl;
	cout<<"album : "<<album<<endl;
	cout<<"year : "<<year<<endl;
	cout<<"track : "<<track<<endl;
	cout<<"****************"<<endl;
}
void Muz::read(istream& listi)
{
	listi>>album;
	listi>>year;
	listi>>track;
}
void Muz::Printf(ostream& listo)
{
	listo<<album<<" "<<year<<" "<<track<<endl;
}
ostream& operator << (ostream& listo, Muz& ms)
{
	ms.Printf(listo);
	return(listo);
}
istream& operator >> (istream& listi, Muz& ms)
{
	ms.read(listi);
	return(listi);
}
void Muz::set_album(string album_name)
{
	album=album_name;
}
string Muz::get_album()
{
	return album;
}
void Muz::set_year(int year_date)
{
	year=year_date;
}
int Muz::get_year()
{
	return year;
}
void Muz::set_track(string track_name)
{
	track=track_name;
}
string Muz::get_track()
{
	return track;
}
