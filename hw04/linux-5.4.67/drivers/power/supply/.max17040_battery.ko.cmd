cmd_drivers/power/supply/max17040_battery.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/max17040_battery.ko drivers/power/supply/max17040_battery.o drivers/power/supply/max17040_battery.mod.o;  true
