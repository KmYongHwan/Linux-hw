cmd_drivers/hid/hid.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/hid.ko drivers/hid/hid.o drivers/hid/hid.mod.o;  true
