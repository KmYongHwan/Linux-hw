cmd_drivers/iio/dummy/iio_dummy.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/iio/dummy/iio_dummy.o drivers/iio/dummy/iio_simple_dummy.o
