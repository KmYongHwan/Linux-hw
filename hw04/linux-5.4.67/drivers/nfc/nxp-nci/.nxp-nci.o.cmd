cmd_drivers/nfc/nxp-nci/nxp-nci.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/nfc/nxp-nci/nxp-nci.o drivers/nfc/nxp-nci/core.o drivers/nfc/nxp-nci/firmware.o
