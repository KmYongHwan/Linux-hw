cmd_drivers/net/vsockmon.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/vsockmon.ko drivers/net/vsockmon.o drivers/net/vsockmon.mod.o;  true
