cmd_drivers/scsi/aic7xxx/aic7xxx.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/aic7xxx/aic7xxx.ko drivers/scsi/aic7xxx/aic7xxx.o drivers/scsi/aic7xxx/aic7xxx.mod.o;  true
