cmd_drivers/tty/isicom.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/tty/isicom.ko drivers/tty/isicom.o drivers/tty/isicom.mod.o;  true
