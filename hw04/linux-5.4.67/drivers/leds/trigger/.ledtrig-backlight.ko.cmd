cmd_drivers/leds/trigger/ledtrig-backlight.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/leds/trigger/ledtrig-backlight.ko drivers/leds/trigger/ledtrig-backlight.o drivers/leds/trigger/ledtrig-backlight.mod.o;  true
