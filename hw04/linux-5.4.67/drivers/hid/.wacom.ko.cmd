cmd_drivers/hid/wacom.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/wacom.ko drivers/hid/wacom.o drivers/hid/wacom.mod.o;  true
