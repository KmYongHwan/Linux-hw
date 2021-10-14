cmd_drivers/net/sb1000.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/sb1000.ko drivers/net/sb1000.o drivers/net/sb1000.mod.o;  true
