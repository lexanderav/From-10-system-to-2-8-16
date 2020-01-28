#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void NumSystemTwo(int num, double date);
void NumSystemEight(int num, double date);
void NumSystemSixteen(int num, double date);
void NumSystemBalance(double date, int znach);

int main()
{
	int num;
	double date;
	cout << "Enter a number in 10 system - ";
	cin >> date;
	num = date;
	date = date - num;
	NumSystemTwo(num,date);
	NumSystemEight(num,date);
	NumSystemSixteen(num,date);
}

void NumSystemTwo(int num, double date)
{
	string ch = "";
	int znach = 2;
	while (num > 0) {
		ch = ch + to_string(num % 2);
		num = num / 2;
	}
	reverse(ch.begin(), ch.end());
	cout << "In 2 system - " << ch << endl;
	NumSystemBalance(date, znach);
}

void NumSystemEight(int num, double date)
{
	string ch = "";
	int znach = 8;
	while (num > 0) {
		ch = ch + to_string(num % 8);
		num = num / 8;
	}
	reverse(ch.begin(), ch.end());
	cout << "In 8 system - " << ch << endl;
	NumSystemBalance(date, znach);
}

void NumSystemSixteen(int num, double date)
{
	string ch = "";
	int buf;
	int znach = 16;
	while (num > 0) {
		buf = num % 16;
		switch (buf) {
		case 10: ch = ch + "A";
			break;
		case 11: ch = ch + "B";
			break;
		case 12: ch = ch + "C";
			break;
		case 13: ch = ch + "D";
			break;
		case 14: ch = ch + "E";
			break;
		case 15: ch = ch + "F";
			break;
		default: ch = ch + to_string(buf);
		}
		num = num / 16;
	}
	reverse(ch.begin(), ch.end());
	cout << "In 16 system - " << ch << endl;
	NumSystemBalance(date, znach);
}

void NumSystemBalance(double date, int znach)
{
	string res;
	int i = 0;
	int date_2;
	while (i < 5)
	{
		date = date * znach;
		date_2 = date;
		date = date - date_2;
		if ((znach == 16) && (date_2 > 9)) {
			switch (date_2) {
			case 10: res = res + "A";
				break;
			case 11:res = res + "B";
				break;
			case 12: res = res + "C";
				break;
			case 13: res = res + "D";
				break;
			case 14: res = res + "E";
				break;
			case 15: res = res + "F";
				break;
			}
		}
		if (date_2 <= 9) {
			res = res + to_string(date_2);
		}
		i = i + 1;
	}
}
