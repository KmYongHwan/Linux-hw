cmd_drivers/hwmon/ftsteutates.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/ftsteutates.ko drivers/hwmon/ftsteutates.o drivers/hwmon/ftsteutates.mod.o;  true
