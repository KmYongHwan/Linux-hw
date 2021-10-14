cmd_drivers/w1/wire.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/w1/wire.ko drivers/w1/wire.o drivers/w1/wire.mod.o;  true
