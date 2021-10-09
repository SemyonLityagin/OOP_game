#ifndef GAME_FIELD_H
#define GAME_FIELD_H

#include <SFML/Graphics.hpp>
#include "Cell/Cell.h"

#define Size 11

class Field{
public:
    Cell** cells;
    Field();
    Field(const Field& other);
    Field& operator = (const Field& other);
    Field(Field&& other);
    Field& operator = (Field&& other);
    ~Field();
    void DrawCells(sf::RenderWindow* window);
};
#endif //GAME_FIELD_H