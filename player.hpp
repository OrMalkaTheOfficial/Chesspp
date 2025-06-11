#include "pieces.hpp"
#include <vector>

class Player {
public:
    std::string color;
    vector<Piece> pieces;

    Player(std::string new_color);

    void generateSet();
    }
};