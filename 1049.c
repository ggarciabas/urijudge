
// Animal

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main () {
	std::string p1, p2, p3;

	std::cin >> p1 >> p2 >> p3;

	if (p1.compare(0,p1.size(),"vertebrado") == 0 && 
		p2.compare(0,p2.size(),"ave") == 0 &&
		p3.compare(0,p3.size(),"carnivoro") == 0) {
		printf ("aguia\n");
	} else if (p1.compare(0,p1.size(),"vertebrado") == 0 && 
		p2.compare(0,p2.size(),"ave") == 0 &&
		p3.compare(0,p3.size(),"onivoro") == 0) {
		printf ("pomba\n");
	} else if (p1.compare(0,p1.size(),"vertebrado") == 0 && 
		p2.compare(0,p2.size(),"mamifero") == 0 &&
		p3.compare(0,p3.size(),"onivoro") == 0) {
		printf ("homem\n");
	} else if (p1.compare(0,p1.size(),"vertebrado") == 0 && 
		p2.compare(0,p2.size(),"mamifero") == 0 &&
		p3.compare(0,p3.size(),"herbivoro") == 0) {
		printf ("vaca\n");
	} else if (p1.compare(0,p1.size(),"invertebrado") == 0 && 
		p2.compare(0,p2.size(),"inseto") == 0 &&
		p3.compare(0,p3.size(),"hematofago") == 0) {
		printf ("pulga\n");
	} else if (p1.compare(0,p1.size(),"invertebrado") == 0 && 
		p2.compare(0,p2.size(),"inseto") == 0 &&
		p3.compare(0,p3.size(),"herbivoro") == 0) {
		printf ("lagarta\n");
	} else if (p1.compare(0,p1.size(),"invertebrado") == 0 && 
		p2.compare(0,p2.size(),"anelideo") == 0 &&
		p3.compare(0,p3.size(),"hematofago") == 0) {
		printf ("sanguessuga\n");
	} else if (p1.compare(0,p1.size(),"invertebrado") == 0 && 
		p2.compare(0,p2.size(),"anelideo") == 0 &&
		p3.compare(0,p3.size(),"onivoro") == 0) {
		printf ("minhoca\n");
	} 

	return 0;
}