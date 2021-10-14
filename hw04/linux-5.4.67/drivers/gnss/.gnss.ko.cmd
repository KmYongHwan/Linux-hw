cmd_drivers/gnss/gnss.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/gnss/gnss.ko drivers/gnss/gnss.o drivers/gnss/gnss.mod.o;  true
