cmd_drivers/hwmon/smsc47b397.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/smsc47b397.ko drivers/hwmon/smsc47b397.o drivers/hwmon/smsc47b397.mod.o;  true
