cmd_drivers/hsi/hsi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hsi/hsi.ko drivers/hsi/hsi.o drivers/hsi/hsi.mod.o;  true
