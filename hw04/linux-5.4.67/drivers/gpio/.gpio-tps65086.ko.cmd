cmd_drivers/gpio/gpio-tps65086.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/gpio/gpio-tps65086.ko drivers/gpio/gpio-tps65086.o drivers/gpio/gpio-tps65086.mod.o;  true
