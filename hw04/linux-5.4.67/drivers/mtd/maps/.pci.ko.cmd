cmd_drivers/mtd/maps/pci.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/maps/pci.ko drivers/mtd/maps/pci.o drivers/mtd/maps/pci.mod.o;  true
