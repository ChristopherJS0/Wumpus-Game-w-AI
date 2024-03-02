#include "Wumpus.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*
	Constructor function that sets the squares in the grid.
*/
WumpusGame::WumpusGame()
{
	for (int i = 0; i < 4; i++) {
		vector<Square> Row;
		for (int j = 0; j < 4; j++) {
			Square NewSquare;
			Row.push_back(NewSquare);
		}
		WumpusGrid.push_back(Row);
	}

	this->SetSquare(3, 0, 'P'); // Player is set at the left bottom position to begin.
}

/*
	Prints entire board with traits and 
*/
void WumpusGame::PrintBoard() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			Square* CrntSquare = &WumpusGrid[i][j];
			cout << setw(4); CrntSquare->PrintTraits();
		}
	}
}

/*
	Gives selected square a new trait/component by the Wumpus World rules.
*/
void WumpusGame::SetSquare(int Row, int Col, char Trait)
{
	if (Row >= 0 && Row <= 4) {
		if (Col >= 0 && Col <= 4) {
			Square* Room = &WumpusGrid[Row][Col];
			Room->Insert(Trait);
		}
	}
}

/*
	Prints the status of the player and the location first.
	Will give different sentences depending on what traits the player has on their current square.
*/
void WumpusGame::PrintStatus()
{
	int RealRow = 4;
	cout << "Player is at ";

}
