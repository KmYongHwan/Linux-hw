cmd_drivers/media/i2c/wm8775.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/i2c/wm8775.ko drivers/media/i2c/wm8775.o drivers/media/i2c/wm8775.mod.o;  true
