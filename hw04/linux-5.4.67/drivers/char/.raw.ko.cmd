cmd_drivers/char/raw.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/char/raw.ko drivers/char/raw.o drivers/char/raw.mod.o;  true
