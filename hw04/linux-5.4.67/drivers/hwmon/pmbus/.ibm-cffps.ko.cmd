cmd_drivers/hwmon/pmbus/ibm-cffps.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/pmbus/ibm-cffps.ko drivers/hwmon/pmbus/ibm-cffps.o drivers/hwmon/pmbus/ibm-cffps.mod.o;  true
