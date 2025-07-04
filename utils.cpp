#include "utils.hpp"
#include <cmath>
#include <vector>

class Position {
    public:
        int x;
        int y;
        Position::Position(int new_x, int new_y){
            x=new_x;
            y=new_y;
        }

        Position::Position(Position& new_position){
            x=new_position.x;
            y=new_position.y;
        }

        void Position::setPosition(int new_x, int new_y){
            if(validatePosition(x, y)){
                x=new_x;
                y=new_y;
            }
        }

        //This function checks if a given input is valid
        //Probably should be somewhere else in the code?
        bool validatePosition(int x, int y){
            if (x==NULL){
                std::cout << "X value is null!";
                return false;
            }
            if (y==NULL){
                std::cout << "Y value is null!";
                return false;
            }
            if (x<1||x>8){
               std::cout << "X value is out of range!";
               return false;
            }

            if (y<1||y>8){
               std::cout << "Y value is out of range!";
               return false;
            }
            return true;
        }

        //isPathClear
};

class Piece {
    public:
        std::string color;
        Position position;
        int points;

        Piece(Position new_position, std::string new_color, int new_points) {
            position = new_position;
            color = new_color;
            points = new_points;
        }
        virtual bool validateMove(Position new_position) = 0;

        void move(Position position){
            if (validateMove) {
                position=new_position;
            }
        }

        void deletePiece() {
            delete this;
        }

};

