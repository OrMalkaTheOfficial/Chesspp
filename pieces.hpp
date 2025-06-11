#include "utils.hpp"

class Pawn : public Piece {
public:
    bool hasMoved;

    Pawn(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

    bool validateMove(Position new_position) {}
};

class Rook : public Piece {
public:
    Rook(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

    bool validateMove(Position new_position) {}
};

class Bishop : public Piece {
public:
    Bishop(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

    bool validateMove(Position new_position) {}
};

class Queen : public Piece, public Rook, public Bishop {
public:
    Queen(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

    bool validateMove(Position new_position) {}
};

class King : public Piece {
public:
    King(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

    bool validateMove(Position new_position) {}
};

class Knight : public Piece {
public:
    Knight(Position new_position, std::string new_color) : Piece(new_position, new_color) {}

    bool validateMove(Position new_position) {}
};

Piece generatePiece(std::string type, std::string new_color) {}