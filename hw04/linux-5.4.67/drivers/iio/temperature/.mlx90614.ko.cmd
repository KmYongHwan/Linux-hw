cmd_drivers/iio/temperature/mlx90614.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/temperature/mlx90614.ko drivers/iio/temperature/mlx90614.o drivers/iio/temperature/mlx90614.mod.o;  true
