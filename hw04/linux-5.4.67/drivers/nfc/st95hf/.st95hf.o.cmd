cmd_drivers/nfc/st95hf/st95hf.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/nfc/st95hf/st95hf.o drivers/nfc/st95hf/spi.o drivers/nfc/st95hf/core.o
