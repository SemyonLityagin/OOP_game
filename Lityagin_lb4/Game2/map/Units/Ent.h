#ifndef GAME_ENT_H
#define GAME_ENT_H

#include "Unit.h"

class Ent:public Unit{
private:
    int health;
    int force;
    bool is_alive;
    ObjectType type;
    int coord[2] = {-1, -1};
public:
    explicit Ent(int health = 12, int force = 6,bool is_alive = true, ObjectType type = ent);
    void SetHealth(int health) override;
    int GetHealth() override;
    void SetForce(int damage) override;
    void SetType(ObjectType value) override;
    ObjectType GetType() override;
    void SetCoord(int x, int y) override;
    int* GetCoord() override;
    void Interaction(Object* object) override;
    bool IsAlive() override;
    void Move(Cell** cells, int x, int y) override;
    std::string GetLog() override;
};

#endif //GAME_ENT_H
