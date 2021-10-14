cmd_drivers/mtd/ssfdc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/ssfdc.ko drivers/mtd/ssfdc.o drivers/mtd/ssfdc.mod.o;  true
