#include "utils.hpp"
#include "pieces.hpp"
#include "player.hpp"
#include <typeinfo>

class Board {
	Piece* board[8][8];

    void generateSet(std::string color) {

        int y = 0;
        int x = 1;
        if (color == "White") {
            y = 1;
        }
        else if (color == "Black") {
            y = 8;
        }

        //Creating special pieces
        for (int i = x;i <= 8;i++) {
            x = i;
            switch (i) {
            case(1 || 8):
                board[x][y]=*(new Rook(color));
            case(2 || 7):
                board[x][y] = *(new Knight(color));
            case(3 || 6):
                board[x][y] = *(new Bishop(color));
            case(4):
                board[x][y] = *(new Queen(color));
            case(5):
                board[x][y] = *(new King(color));
            }
        }

        //Resetting Y value in order to create pawns (based on color)
        x = 1;
        if (color == "White") {
            y = 2;
        }
        else if (color == "Black") {
            y = 7;
        }

        //Creating pawns
        for (int i = x;i <= 8;i++) {
            board[x][y] = *(new Pawn(color));
            x = i;
        }
    }
};