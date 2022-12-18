#include "Drob.h"

void Drob::setFraction() {
	cout << endl << "write numerator" << endl; cin >> numerator;
	cout << "write denomirator" << endl; cin >> denomirator;
}
void Drob::getFraction() {
	cout << endl <<"your fraction: "<< numerator << "/" << denomirator << endl;
}