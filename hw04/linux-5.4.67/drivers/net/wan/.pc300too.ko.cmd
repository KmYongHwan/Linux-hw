cmd_drivers/net/wan/pc300too.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wan/pc300too.ko drivers/net/wan/pc300too.o drivers/net/wan/pc300too.mod.o;  true
