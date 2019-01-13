#ifndef ROOMS_H
#define ROOMS_H
#include <vector>
#include "string"
#include <map>
#include <iostream>

class Room;
class IRoom{

};

class BattleRoom: public IRoom{
public:
    BattleRoom(){

    }
};


class Variant{
public:
    friend Room;
    Variant(std::string text, Room* room, bool isDeadVar = false, std::string deadText = ""){
        this->room = room;
        this->text = text;
        this->isDeadVar = isDeadVar;
        this->deadText  = deadText;
    }
private:
    std::string getText(){
        return text;
    }

    Room* getRoom(){
        if(isDeadVar == true){
            std::cout << deadText << std::endl;
            return nullptr;
        }
        return room;
    }

    bool isDeadVar = false;
    Room* room;
    std::string text;
    std::string deadText;
};

class RoomController;
class Room{
    friend RoomController;
public:
    Room(std::string text){
        this->text = text;
    }

    void createVariant(std::string text, Room* room, bool isDeadVar = false, std::string deadText = ""){
        Variant* variant = new Variant(text,room,isDeadVar,deadText);
        this->variant.push_back(variant);
    }

private:
    Room* roomProcess(){
        int variantNumber;
        std::cout << text << std::endl;
        for(int i =0; i < variant.size(); ++i){
            std::cout << i << ") " << variant[i]->getText() << std::endl;
        }
        std::cin >> variantNumber;
        if(variantNumber > variant.size()){
            std::cout << "No such option." << std::endl;
            return roomProcess();
        }
        return variant[variantNumber]->getRoom();
    }

std::string text;
std::vector<Variant*> variant;
};

class RoomController{
public:
    RoomController(){

    }

    Room* createRoom(std::string text){
        Room* room = new Room(text);
        roomList.push_back(room);
        return room;
    }

    void start(){
        Room* nextRoom = roomList[0]->roomProcess();
        while(true){
        if(nextRoom == nullptr) {
            endGame();
            break;
        }
        else {
           nextRoom = nextRoom->roomProcess();
        }
        }
    }

    void endGame(){

    }

private:
   const int startRoom =0;
   std::vector<Room*> roomList;
};

#endif // ROOMS_H
