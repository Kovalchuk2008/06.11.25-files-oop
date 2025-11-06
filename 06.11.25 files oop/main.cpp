#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class Car
{
	string model;
	int year;
	double price;
public:
	Car() {}
	Car(string mod, int y, double pr)
	{
		model = mod;
		year = y;
		price = pr;
	}
	void Print()
	{
		cout << model << "\t" << year << "\t" << price << endl;
	}
	void SaveFile(string filename)
	{
		ofstream write;
		write.open(filename, ios::out);
		write << "Model: " << model << "\tYear: " << year << "\tPrice: " << price << endl;
		write.close();
	}
	void LoadFile(string filename)
	{
		ofstream read;
		read.open(filename);
		while (!read)
		{
			cout << "Error";
			string temp;
			cout << temp << " ";
		}
		read.close();
	}
};



int main()
{
	Car obj1("Porche 911,", 2023, 300000);
	obj1.Print();
	obj1.SaveFile("Car.txt");

	obj1.LoadFile("Car.txt");
	obj1.Print();
}