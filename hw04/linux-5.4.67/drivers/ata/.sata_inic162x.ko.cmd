cmd_drivers/ata/sata_inic162x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/ata/sata_inic162x.ko drivers/ata/sata_inic162x.o drivers/ata/sata_inic162x.mod.o;  true
