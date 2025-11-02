#include QMK_KEYBOARD_H


enum LAYERS {
    QWERTY,
    MIRROR,
    FKEYS,
    CURSORY,
    TRNS
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT(
        KC_GRV,    KC_1,    KC_2,      KC_3,    KC_4,    KC_5,             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_LBRC,   KC_Q,    KC_W,      KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC,
        LT(CURSORY,KC_EQL),    KC_A,    KC_S,      KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        LT(FKEYS,KC_TAB), KC_Z,    KC_X,      KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
        MT(MOD_LSFT,KC_LEFT), LT(MIRROR,KC_RIGHT),  // lower left and lower right
        KC_LGUI,  // tip
        MT(MOD_LCTL,KC_DOWN), MT(MOD_LALT,KC_UP),  // upper left and upper right

        MT(MOD_LALT, KC_TAB),  MT(MOD_LCTL, KC_BACKSPACE), // uper left and right
        KC_ENTER,  // tip   
        KC_LSFT, KC_SPC // lower left and right
    ),
    [MIRROR] = LAYOUT(
        KC_MINS,   KC_0,      KC_9,    KC_8,    KC_7,    KC_6,            KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_RBRC,  KC_P,      KC_O,    KC_I,    KC_U,    KC_Y,            KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_QUOT,  KC_SCLN,   KC_L,    KC_K,    KC_J,    KC_H,            KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_BSLS,  KC_SLSH,   KC_DOT,  KC_COMM, KC_M,    KC_N,            KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, 
        KC_SPC,  
        KC_TRNS,   KC_TRNS,  

        KC_TRNS,  KC_TRNS, 
        KC_TRNS,  
        KC_TRNS,   KC_TRNS   
    ),
    [FKEYS] = LAYOUT(
        KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_BRIU,   KC_F1,      KC_F2,      KC_F3,      KC_F4,         KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_BRID,   KC_F5,      KC_F6,      KC_F7,      KC_F8,         KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_PSCR,   KC_F9,      KC_F10,      KC_F11,     KC_F12,         KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,                         
        KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS
    ),
    [CURSORY] = LAYOUT(
        KC_TRNS,  KC_TRNS,   KC_TRNS,                   KC_TRNS,                KC_TRNS,                KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,   KC_TRNS,                   QK_MOUSE_WHEEL_UP,      KC_TRNS,                QK_MOUSE_ACCELERATION_0,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,   QK_MOUSE_WHEEL_LEFT,       QK_MOUSE_WHEEL_DOWN,    QK_MOUSE_WHEEL_RIGHT,    QK_MOUSE_ACCELERATION_1,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,   QK_MOUSE_BUTTON_1,         QK_MOUSE_BUTTON_3,      QK_MOUSE_BUTTON_2,      QK_MOUSE_ACCELERATION_2,       KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_LSFT, KC_TRNS,  // lower left and lower right
        KC_LGUI,  // tip
        KC_LCTL, KC_LALT,  // upper left and upper right

        KC_TRNS,  KC_TRNS, 
        KC_TRNS,  
        KC_TRNS,   KC_TRNS
    )
    // [TRNS] = LAYOUT(
    //     KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    //     KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    //     KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    //     KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS,                         
    //     KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS
    // )
};

const uint16_t PROGMEM K_ENT[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM K_DEL[] = {KC_X, KC_F, COMBO_END};
const uint16_t PROGMEM K_ESC[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM K_PGUP[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM K_PGDN[] = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM K_BSPC[] = {KC_G, KC_T, COMBO_END};

combo_t key_combos[] = {
    COMBO(K_ENT, KC_ENT),
    COMBO(K_DEL, KC_DEL), 
    COMBO(K_ESC, KC_ESC), 
    COMBO(K_PGUP, KC_PGUP), 
    COMBO(K_PGDN, KC_PGDN), 
    COMBO(K_BSPC, KC_BACKSPACE) 
};
