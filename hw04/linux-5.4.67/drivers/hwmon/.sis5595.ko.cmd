cmd_drivers/hwmon/sis5595.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/sis5595.ko drivers/hwmon/sis5595.o drivers/hwmon/sis5595.mod.o;  true
