cmd_drivers/spi/spi-bitbang.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/spi/spi-bitbang.ko drivers/spi/spi-bitbang.o drivers/spi/spi-bitbang.mod.o;  true
