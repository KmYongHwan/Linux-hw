cmd_drivers/iio/accel/mxc6255.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/accel/mxc6255.ko drivers/iio/accel/mxc6255.o drivers/iio/accel/mxc6255.mod.o;  true
