cmd_drivers/iio/trigger/iio-trig-hrtimer.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/trigger/iio-trig-hrtimer.ko drivers/iio/trigger/iio-trig-hrtimer.o drivers/iio/trigger/iio-trig-hrtimer.mod.o;  true
