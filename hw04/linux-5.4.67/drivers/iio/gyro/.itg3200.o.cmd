cmd_drivers/iio/gyro/itg3200.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/iio/gyro/itg3200.o drivers/iio/gyro/itg3200_core.o drivers/iio/gyro/itg3200_buffer.o
