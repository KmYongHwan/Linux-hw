cmd_drivers/scsi/initio.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/initio.ko drivers/scsi/initio.o drivers/scsi/initio.mod.o;  true
