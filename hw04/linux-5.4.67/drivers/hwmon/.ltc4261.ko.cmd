cmd_drivers/hwmon/ltc4261.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/ltc4261.ko drivers/hwmon/ltc4261.o drivers/hwmon/ltc4261.mod.o;  true
