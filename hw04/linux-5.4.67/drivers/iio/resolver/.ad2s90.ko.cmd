cmd_drivers/iio/resolver/ad2s90.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/resolver/ad2s90.ko drivers/iio/resolver/ad2s90.o drivers/iio/resolver/ad2s90.mod.o;  true
