cmd_drivers/i3c/i3c.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/i3c/i3c.ko drivers/i3c/i3c.o drivers/i3c/i3c.mod.o;  true
