cmd_drivers/iio/light/si1145.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/light/si1145.ko drivers/iio/light/si1145.o drivers/iio/light/si1145.mod.o;  true
