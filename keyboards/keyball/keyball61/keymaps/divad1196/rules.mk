RGBLIGHT_ENABLE = no

OLED_ENABLE = yes

# VIA will also deactivate other functionalities
# VIA_ENABLE = yes

# use it with
# qmk console
# CONSOLE_ENABLE = yes

EXTRAKEY_ENABLE = yes        # Audio control and System control
SRC += users/divad1196/volume.c
