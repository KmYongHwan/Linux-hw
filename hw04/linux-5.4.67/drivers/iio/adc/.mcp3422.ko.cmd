cmd_drivers/iio/adc/mcp3422.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/adc/mcp3422.ko drivers/iio/adc/mcp3422.o drivers/iio/adc/mcp3422.mod.o;  true
