#pragma once
#include <vector>
#include <iostream>
#include "Square.h"

class WumpusGame {
public:

	WumpusGame();
	void PrintBoard();
	void SetSquare(int Row, int Col, char Trait);

	void PrintStatus();
	void DoAction();
	


private:
	std::vector<std::vector<Square>> WumpusGrid;

};