cmd_drivers/gpio/gpio-it87.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/gpio/gpio-it87.ko drivers/gpio/gpio-it87.o drivers/gpio/gpio-it87.mod.o;  true
