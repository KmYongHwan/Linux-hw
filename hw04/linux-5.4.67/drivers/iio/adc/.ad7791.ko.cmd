cmd_drivers/iio/adc/ad7791.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/adc/ad7791.ko drivers/iio/adc/ad7791.o drivers/iio/adc/ad7791.mod.o;  true
