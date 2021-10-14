cmd_drivers/mtd/ftl.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/ftl.ko drivers/mtd/ftl.o drivers/mtd/ftl.mod.o;  true
