cmd_drivers/mtd/maps/physmap.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/mtd/maps/physmap.o drivers/mtd/maps/physmap-core.o
