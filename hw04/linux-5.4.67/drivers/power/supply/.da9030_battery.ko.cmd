cmd_drivers/power/supply/da9030_battery.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/da9030_battery.ko drivers/power/supply/da9030_battery.o drivers/power/supply/da9030_battery.mod.o;  true
