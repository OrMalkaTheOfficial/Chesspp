#include "pieces.hpp"
#include <vector>

class Player {
public:
    std::string color;
    std::vector<Piece> pieces;

    Player(std::string new_color) {
        color = new_color;
    }

    void generateSet() {

        Position current_position = new Position();
        current_position.x = 1;
        if (color == "White") {
            current_position.y = 1;
        }
        else if (color == "Black") {
            current_position.y = 8;
        }

        //Creating special pieces
        for (int i = x;i <= 8;i++) {
            current_position.x = i;
            switch (i) {
            case(1 || 8):
                pieces.push_back(new Rook(current_position, color));
            case(2 || 7):
                pieces.push_back(new Knight(current_position, color));
            case(3 || 6):
                pieces.push_back(new Bishop(current_position, color));
            case(4):
                pieces.push_back(new Queen(current_position, color));
            case(5):
                pieces.push_back(new King(current_position, color));
            }
        }

        //Resetting Y value in order to create pawns (based on color)
        current_position.x = 1;
        if (color == "White") {
            current_position.y = 2;
        }
        else if (color == "Black") {
            current_position.y = 7;
        }

        //Creating pawns
        for (int i = x;i <= 8;i++) {
            pieces.push_back(new Pawn(current_position, color));
            current_position.x = i;
        }
    }

    int sumPoints() {
        int sum = 0;
        for (p : pieces) {
            sum += p.points;
        }
        return sum;
    }
};
