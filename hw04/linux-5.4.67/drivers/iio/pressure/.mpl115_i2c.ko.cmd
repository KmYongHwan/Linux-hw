cmd_drivers/iio/pressure/mpl115_i2c.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/pressure/mpl115_i2c.ko drivers/iio/pressure/mpl115_i2c.o drivers/iio/pressure/mpl115_i2c.mod.o;  true
