cmd_drivers/gpio/gpio-max730x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/gpio/gpio-max730x.ko drivers/gpio/gpio-max730x.o drivers/gpio/gpio-max730x.mod.o;  true
