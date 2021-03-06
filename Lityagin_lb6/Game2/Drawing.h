#ifndef GAME_DRAWING_H
#define GAME_DRAWING_H

#define HeroPNG "../texture/Gamer.png"
#define EyePNG "../texture/Eye.png"
#define EntPNG "../texture/Ent.png"
#define SpiderPNG "../texture/Spider.png"
#define AxePNG "../texture/Axe.png"
#define CoinPNG "../texture/Coin.png"
#define CandyPNG "../texture/Candy.png"

#define FloorPNG "../texture/Cell.png"
#define EnterPNG "../texture/CellStart.png"
#define ExitPNG "../texture/CellEnd.png"
#define WallPNG "../texture/CellWall.png"
#define PlayPNG "../texture/Play.png"

#define UpPNG "../texture/Up.png"
#define DownPNG "../texture/Down.png"
#define RightPNG "../texture/Right.png"
#define LeftPNG "../texture/Left.png"


#define SavePNG "../texture/save.png"
#define Save1PNG "../texture/save1.png"
#define LoadPNG "../texture/load.png"
#define Load1PNG "../texture/load1.png"

#include <SFML/Graphics.hpp>
#include "map/MapBuilder/Field/Cell/Cell.h"

using namespace sf;

class Drawing{
private:
    Texture textureObject[7];
    Texture textureCell[4];
    Texture textureButton[8];
    Sprite sprite;
    CellTypes cellType;
    ObjectType objectType;
    Font font;
    Text text;
    Cell** cells;
public:
    Drawing(Cell** cells);
    void UpdateCells(Cell** cells);
    void DrawFieldOnWindow(RenderWindow *window);
};

#endif //GAME_DRAWING_H
