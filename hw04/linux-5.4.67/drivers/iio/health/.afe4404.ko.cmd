cmd_drivers/iio/health/afe4404.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/health/afe4404.ko drivers/iio/health/afe4404.o drivers/iio/health/afe4404.mod.o;  true
