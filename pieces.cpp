#include "utils.hpp"

class Pawn : public Piece {
    public:
        bool hasMoved;

        Pawn(int new_id, Position new_position, std::string new_color) : Piece(new_id, new_position, new_color) {}
        
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
        Rook(int new_id, Position new_position, std::string new_color) : Piece(new_id, new_position, new_color) {}

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
        Bishop(int new_id, Position new_position, std::string new_color) : Piece(new_id, new_position, new_color) {}

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
        Queen(int new_id, Position new_position, std::string new_color) : Piece(new_id, new_position, new_color) {}

        bool validateMove(Position new_position) {
            if (Rook::validateMove(new_position) && Bishop::validateMove(new_position)) {
                return true;
            }
            return false;
        }
};

class Knight:: public Piece {

};