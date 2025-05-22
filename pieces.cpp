#include "utils.hpp"

class Pawn : public Piece {
    bool hasMoved;

    Pawn(int new_id, Position new_position, std::string new_color){
        this->setId(new_id);
        this->setPosition(Position(new_position));
        this->setColor(new_color);
        this->setIsAlive(true);
    }
        
    bool validateMove(Position new_position){
        if(new_position.getX()!=this->getPosition().getX() 
        ||new_position.getY()>this->getPosition().getY()+2 
        || new_position.getY()<=this->getPosition().getY()){
            std::cout << "Illegal move";
            return false;
        }
        if(new_position.getY()>this->getPosition().getY()+1 && hasMoved==true){
            std::cout << "Illegal move";
            return false;
        }
        return true;
    }

    void Move(Position new_position){
        this->getPosition()=Position(new_position);
        //What about "eating" crossway?
    }
};