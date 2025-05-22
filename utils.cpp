#include <iostream>
#include "utils.hpp"

class Position {
        
    int x;
    char y;
    Position::Position(int x, char y){
        this->x=x;
        this->y=y;
    }

    Position::Position(Position& new_position){
        this->x=new_position.x;
        this->y=new_position.y;
    }

    void Position::setPosition(int x, char y){
        if(validatePosition(x, y)){
            this->x=x;
            this->y=y;
        }

        }

        //This function checks if a given input is valid
            //Probably should be somewhere else in the code?
        bool validatePosition(int x, char y){
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

            if (y<'A'||y>'H'){
               std::cout << "Y value is out of range!";
               return false;
            }
            return true;
        }
};

class Piece {
    public:
        int id;
        std::string color;
        Position position;
        bool isAlive;

        virtual bool validateMove(Position position){}
        virtual void move(Position position){}

};