cmd_drivers/usb/misc/appledisplay.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/misc/appledisplay.ko drivers/usb/misc/appledisplay.o drivers/usb/misc/appledisplay.mod.o;  true
