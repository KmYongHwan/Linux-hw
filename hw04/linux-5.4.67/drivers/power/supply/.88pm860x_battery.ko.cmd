cmd_drivers/power/supply/88pm860x_battery.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/88pm860x_battery.ko drivers/power/supply/88pm860x_battery.o drivers/power/supply/88pm860x_battery.mod.o;  true
