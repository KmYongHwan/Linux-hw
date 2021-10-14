cmd_drivers/scsi/ppa.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/ppa.ko drivers/scsi/ppa.o drivers/scsi/ppa.mod.o;  true
