cmd_drivers/iio/pressure/st_pressure.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/pressure/st_pressure.ko drivers/iio/pressure/st_pressure.o drivers/iio/pressure/st_pressure.mod.o;  true
