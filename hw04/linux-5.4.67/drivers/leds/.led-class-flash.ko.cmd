cmd_drivers/leds/led-class-flash.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/leds/led-class-flash.ko drivers/leds/led-class-flash.o drivers/leds/led-class-flash.mod.o;  true
