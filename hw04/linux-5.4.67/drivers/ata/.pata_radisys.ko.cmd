cmd_drivers/ata/pata_radisys.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/ata/pata_radisys.ko drivers/ata/pata_radisys.o drivers/ata/pata_radisys.mod.o;  true
