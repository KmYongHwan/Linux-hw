cmd_drivers/hid/hid-generic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/hid-generic.ko drivers/hid/hid-generic.o drivers/hid/hid-generic.mod.o;  true
