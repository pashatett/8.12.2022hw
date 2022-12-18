#pragma once
#include <iostream>
using namespace std;

class Drob{
	double numerator;
	double denomirator;
public:
	void setFraction();
	void getFraction();

	void operator* (Drob& a) {
		cout <<endl<< numerator * a.numerator << "/" << denomirator * a.denomirator;
	}
	void operator/ (Drob& a) {
		cout <<endl<< numerator * a.denomirator << "/" << denomirator * a.numerator;
	}

	//hvatit tolko umnojeniya i deleniya??
};

