cmd_net/nfc/nci/nci.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/nfc/nci/nci.o net/nfc/nci/core.o net/nfc/nci/data.o net/nfc/nci/lib.o net/nfc/nci/ntf.o net/nfc/nci/rsp.o net/nfc/nci/hci.o
