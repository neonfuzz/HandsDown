void ergodox_board_led_off(void)   {
    ML_LED_1(false);
    ML_LED_2(false);
    ML_LED_3(false);
};

void ergodox_right_led_1_off(void) {
    ML_LED_1(false);
};

void ergodox_right_led_2_off(void) {
    ML_LED_2(false);
};

void ergodox_right_led_3_off(void) {
    ML_LED_3(false);
};

void ergodox_right_led_1_on(void)  {
    ML_LED_1(true);
};

void ergodox_right_led_2_on(void)  {
    ML_LED_2(true);
};

void ergodox_right_led_3_on(void)  {
    ML_LED_3(true);
};
