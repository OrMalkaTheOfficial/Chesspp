#include "utils.hpp"
#include "pieces.cpp"
#include "player.cpp"
#include <map>
#include <unordered_map>

int main()
{
	std::map<int, char> letters_map;
	letters_map['A'] = 1;
	letters_map['B'] = 2;
	letters_map['C'] = 3;
	letters_map['D'] = 4;
	letters_map['E'] = 5;
	letters_map['F'] = 6;
	letters_map['G'] = 7;
	letters_map['H'] = 8;

	
	Player player1 = new Player("White");
	Player player2 = new Player("Black");

	player1.generateSet();
	player2.generateSet();
	bool checkmate = false;
	while (!checkmate) {
		cout << "Player 1 turn - select origin position:"
		cin >>
	}
}