cmd_drivers/media/radio/radio-mr800.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/radio/radio-mr800.ko drivers/media/radio/radio-mr800.o drivers/media/radio/radio-mr800.mod.o;  true
