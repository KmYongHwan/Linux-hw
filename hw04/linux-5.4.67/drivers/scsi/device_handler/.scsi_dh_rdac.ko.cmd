cmd_drivers/scsi/device_handler/scsi_dh_rdac.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/device_handler/scsi_dh_rdac.ko drivers/scsi/device_handler/scsi_dh_rdac.o drivers/scsi/device_handler/scsi_dh_rdac.mod.o;  true
