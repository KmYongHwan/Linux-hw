cmd_drivers/hwmon/ibmaem.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/ibmaem.ko drivers/hwmon/ibmaem.o drivers/hwmon/ibmaem.mod.o;  true
