cmd_drivers/spi/spi-cadence.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/spi/spi-cadence.ko drivers/spi/spi-cadence.o drivers/spi/spi-cadence.mod.o;  true
