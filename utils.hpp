#include <iostream>
#include <cmath>

class Position {
    private:
        int x;
        char y;

    public:
        Position(int new_x, char new_y){};
        Position(Position& new_position){};
        bool validatePosition(int x, char y){};
};

class Piece {
    private:
        int id;
        std::string color;
        Position position;
        bool isAlive;

    public:
        Piece(){};

        virtual bool validateMove(Position position){}
        virtual void move(Position position){}

};