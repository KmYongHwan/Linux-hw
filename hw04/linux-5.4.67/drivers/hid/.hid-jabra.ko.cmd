cmd_drivers/hid/hid-jabra.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/hid-jabra.ko drivers/hid/hid-jabra.o drivers/hid/hid-jabra.mod.o;  true
