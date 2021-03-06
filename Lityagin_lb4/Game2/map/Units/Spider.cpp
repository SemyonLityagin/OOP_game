#include "Spider.h"

Spider::Spider(int health, int force, bool is_alive, ObjectType type) {
    this->health = health;
    this->force = force;
    this->is_alive = is_alive;
    this->type = type;
}
void Spider::SetHealth(int health) {
    this->health = health;
    if(health <= 0){
        this->is_alive = false;
    }
}
int Spider::GetHealth() {
    return this->health;
}
void Spider::SetForce(int damage) {
    this->force = damage;
}
void Spider::SetType(ObjectType value) {
    this->type = value;
}
ObjectType Spider::GetType() {
    return this->type;
}
void Spider::SetCoord(int x, int y) {
    this->coord[0] = x;
    this->coord[1] = y;
}
void Spider::Interaction(Object* object) {
    object->SetHealth(object->GetHealth() - this->force);
}
int* Spider::GetCoord() {
    return this->coord;
}
bool Spider::IsAlive() {
    return is_alive;
}
void Spider::Move(Cell** cells, int x, int y) {
    if((x > 0 && x < Size - 1 && y > 0 && y < Size -1)) {
        if(cells[x][y].GetObjectType() == empty) {
            cells[coord[0]][coord[1]].SetObject(nullptr);
            SetCoord(x, y);
            cells[x][y].SetObject(this);
        }
        else{
            if (cells[x][y].GetObjectType() == hero) {
                Interaction(cells[x][y].GetObject());
            }
        }
    }
}

std::string Spider::GetLog() {
    return "type: spider\nhealth: " + std::to_string(health) + " \n" + "damage: " + std::to_string(force) + " \n" + "coord: ("   + std::to_string(coord[0]) + ", " +
    std::to_string(coord[1]) + ")" + " \n" +"alive: " + std::to_string(is_alive) + " \n" + "//-----------\n";
}
