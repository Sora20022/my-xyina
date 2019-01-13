#ifndef PLAYER_H
#define PLAYER_H



class IPlayer{
public:



};

class BPlayer{
public:



private:
    int HP;
    int MP;
    int ATK;
    int DEF;
};


class Warrior: public BPlayer, public IPlayer{
public:



};



#endif // PLAYER_H
