cmd_drivers/hwmon/k10temp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/k10temp.ko drivers/hwmon/k10temp.o drivers/hwmon/k10temp.mod.o;  true
