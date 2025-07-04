#include "utils.hpp"

class Pawn : public Piece {
    public:
        bool hasMoved;

        Pawn(Position new_position, std::string new_color) : Piece(new_id, new_position, new_color) {}
        
        bool validateMove(Position new_position){
            if(new_position.x!=position.x
            ||new_position.y>position.y+2 
            ||new_position.y<=position.y){
                std::cout << "Illegal move";
                return false;
            }
            if(new_position.y>position.y+1 && hasMoved==true){
                std::cout << "Illegal move";
                return false;
            }
            return true;
        }
};

class Rook : public Piece {
    public:
        Rook(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

        bool validateMove(Position new_position) {
            if (new_position.x != position.x && new_position.y != position.x) {
                std::cout << "Illegal move";
                return false;
            }
            return true;
        }
};

class Bishop : public Piece {
    public:
        Bishop(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

        bool validateMove(Position new_position) {
            if (abs(new_position.x - x) != abs(new_position.y - y)) {
                std::cout << "Illegal move";
                return false;
            }
            return true;
        }
};

class Queen : public Piece, public Rook, public Bishop {
    public:
        Queen(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

        bool validateMove(Position new_position) {
            if (Rook::validateMove(new_position) && Bishop::validateMove(new_position)) {
                return true;
            }
            return false;
        }
};

class King : public Piece {
    public:
        King(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

        bool validateMove(Position new_position) {
            if (abs(new_position.x - position, x > 1) || (new_position.y - position, y > 1) {
                return false;
            }
            return true;
        }
};

class Knight : public Piece {
public:
    Knight(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

    bool validateMove(Position new_position) {
        if (abs(new_position.x - position.x == 1)&& abs(new_position.y - position.y == 2)) || abs(new_position.y - position.x == 2) && abs(new_position.y - position.y == 1) {
            return true;
        }
        return false;
    }
};

Piece generatePiece(std::string type, Position new_position std::string new_color) {
    switch (type) {
        case "Pawn":
            return Pawn(new_position, new_color);
            break;
        case "Rook":
            return Rook(new_position, new_color);
            break;
        case "Bishop":
            return Bishop(new_position, new_color);
            break;
        case "Queen":
            return Queen(new_position, new_color);
            break;
        case "King":
            return King(new_position, new_color);
            break;
        case "Knight":
            return Knight(new_position, new_color);
            break;
        default:
            break;
    }
}

Piece[] generateSet(str::string new_color) {

}