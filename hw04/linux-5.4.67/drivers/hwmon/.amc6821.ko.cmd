cmd_drivers/hwmon/amc6821.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/amc6821.ko drivers/hwmon/amc6821.o drivers/hwmon/amc6821.mod.o;  true
