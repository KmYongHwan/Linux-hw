cmd_drivers/tty/moxa.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/tty/moxa.ko drivers/tty/moxa.o drivers/tty/moxa.mod.o;  true
