cmd_drivers/iio/health/max30100.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/health/max30100.ko drivers/iio/health/max30100.o drivers/iio/health/max30100.mod.o;  true
