cmd_drivers/scsi/be2iscsi/be2iscsi.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/scsi/be2iscsi/be2iscsi.o drivers/scsi/be2iscsi/be_iscsi.o drivers/scsi/be2iscsi/be_main.o drivers/scsi/be2iscsi/be_mgmt.o drivers/scsi/be2iscsi/be_cmds.o
