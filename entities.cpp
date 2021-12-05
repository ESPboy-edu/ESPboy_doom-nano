#include <stdint.h>
#include "entities.h"
#include "types.h"
#include "constants.h"

Entity create_entity(uint8_t type, uint16_t x,  uint16_t y, uint8_t initialState, uint8_t initialHealth) {
  UID uid = create_uid(type, x, y);
  Coords pos = create_coords((double) x + .5, (double) y + .5);
  Entity new_entity = { uid, pos, initialState, initialHealth, 0, 0 };
  return new_entity;
}

StaticEntity crate_static_entity(UID uid, uint16_t x,  uint16_t y, bool active) {
  return { uid, x, y, active };
}
