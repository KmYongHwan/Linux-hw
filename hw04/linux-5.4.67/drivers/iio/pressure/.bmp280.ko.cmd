cmd_drivers/iio/pressure/bmp280.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/pressure/bmp280.ko drivers/iio/pressure/bmp280.o drivers/iio/pressure/bmp280.mod.o;  true
