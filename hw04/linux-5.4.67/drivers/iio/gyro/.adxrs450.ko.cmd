cmd_drivers/iio/gyro/adxrs450.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/gyro/adxrs450.ko drivers/iio/gyro/adxrs450.o drivers/iio/gyro/adxrs450.mod.o;  true
