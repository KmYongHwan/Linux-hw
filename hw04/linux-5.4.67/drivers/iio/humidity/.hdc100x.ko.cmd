cmd_drivers/iio/humidity/hdc100x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/humidity/hdc100x.ko drivers/iio/humidity/hdc100x.o drivers/iio/humidity/hdc100x.mod.o;  true
