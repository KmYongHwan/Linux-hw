cmd_drivers/hwmon/pmbus/irps5401.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/pmbus/irps5401.ko drivers/hwmon/pmbus/irps5401.o drivers/hwmon/pmbus/irps5401.mod.o;  true
