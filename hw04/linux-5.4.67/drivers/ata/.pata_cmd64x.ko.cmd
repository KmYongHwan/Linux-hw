cmd_drivers/ata/pata_cmd64x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/ata/pata_cmd64x.ko drivers/ata/pata_cmd64x.o drivers/ata/pata_cmd64x.mod.o;  true
