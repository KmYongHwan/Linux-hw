cmd_drivers/gpio/gpio-da9055.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/gpio/gpio-da9055.ko drivers/gpio/gpio-da9055.o drivers/gpio/gpio-da9055.mod.o;  true
