cmd_drivers/iio/dac/ad5449.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/dac/ad5449.ko drivers/iio/dac/ad5449.o drivers/iio/dac/ad5449.mod.o;  true
