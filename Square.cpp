#include "Square.h"
#include <iostream>

void Square::Insert(char Trait) { Space.push_back(Trait);}

void Square::PrintTraits() {
	for (int i = 0; i < Space.size(); i++) {
		std::cout << Space[i] << " ";
	}
}