cmd_drivers/i2c/i2c-smbus.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/i2c/i2c-smbus.ko drivers/i2c/i2c-smbus.o drivers/i2c/i2c-smbus.mod.o;  true
