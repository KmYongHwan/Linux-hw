cmd_drivers/gpio/gpio-kempld.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/gpio/gpio-kempld.ko drivers/gpio/gpio-kempld.o drivers/gpio/gpio-kempld.mod.o;  true
