cmd_drivers/iio/pressure/hp206c.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/pressure/hp206c.ko drivers/iio/pressure/hp206c.o drivers/iio/pressure/hp206c.mod.o;  true
