cmd_drivers/media/i2c/tvp514x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/i2c/tvp514x.ko drivers/media/i2c/tvp514x.o drivers/media/i2c/tvp514x.mod.o;  true
