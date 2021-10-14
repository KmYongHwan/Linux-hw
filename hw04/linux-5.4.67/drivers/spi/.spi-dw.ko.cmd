cmd_drivers/spi/spi-dw.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/spi/spi-dw.ko drivers/spi/spi-dw.o drivers/spi/spi-dw.mod.o;  true
