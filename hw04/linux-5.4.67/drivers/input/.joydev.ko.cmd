cmd_drivers/input/joydev.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/joydev.ko drivers/input/joydev.o drivers/input/joydev.mod.o;  true
