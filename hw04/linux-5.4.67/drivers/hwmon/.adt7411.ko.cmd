cmd_drivers/hwmon/adt7411.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/adt7411.ko drivers/hwmon/adt7411.o drivers/hwmon/adt7411.mod.o;  true
