cmd_drivers/mtd/maps/physmap.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/maps/physmap.ko drivers/mtd/maps/physmap.o drivers/mtd/maps/physmap.mod.o;  true
