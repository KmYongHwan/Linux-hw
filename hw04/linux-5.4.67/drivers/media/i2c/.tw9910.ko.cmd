cmd_drivers/media/i2c/tw9910.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/i2c/tw9910.ko drivers/media/i2c/tw9910.o drivers/media/i2c/tw9910.mod.o;  true
