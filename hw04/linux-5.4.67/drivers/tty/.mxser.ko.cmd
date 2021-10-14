cmd_drivers/tty/mxser.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/tty/mxser.ko drivers/tty/mxser.o drivers/tty/mxser.mod.o;  true
