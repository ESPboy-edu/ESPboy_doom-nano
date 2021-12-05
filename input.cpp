#include <Arduino.h>
#include "input.h"
#include "constants.h"

extern uint16_t readKeysResult;

#define PAD_LEFT        0x01
#define PAD_UP          0x02
#define PAD_DOWN        0x04
#define PAD_RIGHT       0x08
#define PAD_ACT         0x10
#define PAD_ESC         0x20
#define PAD_LFT         0x40
#define PAD_RGT         0x80
#define PAD_ANY         0xff

void input_setup() {
}

bool input_left() {return readKeysResult&PAD_LEFT?1:0;};

bool input_right() {return readKeysResult&PAD_RIGHT?1:0;};

bool input_up() {return readKeysResult&PAD_UP?1:0;};

bool input_down() {return readKeysResult&PAD_DOWN?1:0;};

bool input_fire() {return readKeysResult&PAD_ACT?1:0;};
