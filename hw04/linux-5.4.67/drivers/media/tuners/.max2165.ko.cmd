cmd_drivers/media/tuners/max2165.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/tuners/max2165.ko drivers/media/tuners/max2165.o drivers/media/tuners/max2165.mod.o;  true
