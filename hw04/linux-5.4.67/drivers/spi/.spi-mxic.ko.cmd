cmd_drivers/spi/spi-mxic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/spi/spi-mxic.ko drivers/spi/spi-mxic.o drivers/spi/spi-mxic.mod.o;  true
