cmd_drivers/scsi/am53c974.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/am53c974.ko drivers/scsi/am53c974.o drivers/scsi/am53c974.mod.o;  true
