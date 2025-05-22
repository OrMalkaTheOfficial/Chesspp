#include <iostream>

class Position {
    private:
        int x;
        char y;

    public:
        Position(int new_x, char new_y){};
        Position(Position& new_position){};

        int getX(){};
        char getY(){};

        void setX(int x){};
        void setY(char y){};

        void setPosition(int new_x, char new_y){};

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
        int getId(){};
        std::string getColor(){};
        Position getPosition(){};
        bool getIsAlive(){};
        void setId(int id){};
        void setColor(std::string color){};
        void setPosition(Position position){};
        void setIsAlive(bool isAlive){};

        virtual bool validateMove(Position position){}
        virtual void move(Position position){}

};