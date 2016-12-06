// Mes

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <iostream>

int main () {
	int m;
	std::vector<std::string> meses;

	meses.push_back("January");
	meses.push_back("February");
	meses.push_back("March");
	meses.push_back("April");
	meses.push_back("May");
	meses.push_back("June");
	meses.push_back("July");
	meses.push_back("August");
	meses.push_back("September");
	meses.push_back("October");
	meses.push_back("November");
	meses.push_back("December");

	scanf ("%d", &m);

	std::cout << meses.at(m-1) << std::endl;

	return 0;
}