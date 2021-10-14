cmd_drivers/spi/spi-dw-midpci.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/spi/spi-dw-midpci.o drivers/spi/spi-dw-pci.o drivers/spi/spi-dw-mid.o
