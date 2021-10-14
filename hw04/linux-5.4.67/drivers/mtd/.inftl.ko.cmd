cmd_drivers/mtd/inftl.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/inftl.ko drivers/mtd/inftl.o drivers/mtd/inftl.mod.o;  true
