cmd_drivers/hid/hid-logitech.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/hid-logitech.ko drivers/hid/hid-logitech.o drivers/hid/hid-logitech.mod.o;  true
