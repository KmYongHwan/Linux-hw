cmd_drivers/usb/storage/ums-karma.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/storage/ums-karma.ko drivers/usb/storage/ums-karma.o drivers/usb/storage/ums-karma.mod.o;  true
