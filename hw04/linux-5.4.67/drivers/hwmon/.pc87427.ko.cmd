cmd_drivers/hwmon/pc87427.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/pc87427.ko drivers/hwmon/pc87427.o drivers/hwmon/pc87427.mod.o;  true
