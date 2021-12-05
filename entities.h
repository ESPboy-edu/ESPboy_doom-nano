#ifndef _entities_h
#define _entities_h

#include "types.h"

// Shortcuts
#define create_player(x, y)   { \
    create_coords((double) x + 0.5, (double) y + 0.5), \
    create_coords(1, 0), \
    create_coords(0, -0.66), \
    0, \
    100,  \
  }

#define create_enemy(x, y)            create_entity(E_ENEMY, x, y, S_STAND, 100)
#define create_medikit(x, y)          create_entity(E_MEDIKIT, x, y, S_STAND, 0)
#define create_key(x, y)              create_entity(E_KEY, x, y, S_STAND, 0)
#define create_fireball(x, y, dir)    create_entity(E_FIREBALL, x, y, S_STAND, dir)

// entity statuses
#define S_STAND               0
#define S_ALERT               1
#define S_FIRING              2
#define S_MELEE               3
#define S_HIT                 4
#define S_DEAD                5
#define S_HIDDEN              6
#define S_OPEN                7
#define S_CLOSE               8

struct Player { 
  Coords pos;
  Coords dir;
  Coords plane;
  double velocity;
  uint8_t health;
  uint8_t keys;  
};

struct Entity {
  UID uid;
  Coords pos;
  uint8_t state;
  uint8_t health;     // angle for fireballs
  uint32_t distance;
  uint8_t timer;
};

struct StaticEntity  { 
  UID uid;
  uint32_t x;
  uint32_t y;
  bool active;
};

Entity create_entity(uint8_t type, uint32_t x,  uint32_t y, uint8_t initialState, uint8_t initialHealth);
StaticEntity create_static_entity(UID uid, uint32_t x,  uint32_t y, bool active);

#endif
