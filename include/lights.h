char const*const RED_LED_FILE[] = {
 "/sys/class/leds/red/brightness",
};
char const*const GREEN_LED_FILE[]= {
 "/sys/class/leds/green/brightness",
};
char const*const BLUE_LED_FILE[] = {
 "/sys/class/leds/blue/brightness",
};

char const*const LED_FILE_TRIGGER[] = {
 "/sys/class/leds/red/use_pattern",
 "/sys/class/leds/green/use_pattern",
 "/sys/class/leds/blue/use_pattern",
};

char const*const LED_FILE_PATTERN[] = {
 "/sys/devices/platfrom/nmk-i2c.2/i2c-2/2-0040/pattern_data",
};

char const*const LED_FILE_DELAYON[] = {
 "/sys/devices/platfrom/nmk-i2c.2/i2c-2/2-0040/pattern_delay",
};

char const*const LED_FILE_DELAYOFF[] = {
 "/sys/devices/platfrom/nmk-i2c.2/i2c-2/2-0040/pattern_duration_secs",
};

char const*const BUTTON_BACKLIGHT_FILE[] = {
 "/sys/class/leds/button-backlight/brightness",
};

char const*const LCD_BACKLIGHT_FILE = "/sys/class/leds/lcd-backlight/brightness";