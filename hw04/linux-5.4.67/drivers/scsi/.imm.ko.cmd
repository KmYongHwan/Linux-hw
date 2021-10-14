cmd_drivers/scsi/imm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/imm.ko drivers/scsi/imm.o drivers/scsi/imm.mod.o;  true
