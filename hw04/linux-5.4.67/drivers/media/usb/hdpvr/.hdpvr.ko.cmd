cmd_drivers/media/usb/hdpvr/hdpvr.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/usb/hdpvr/hdpvr.ko drivers/media/usb/hdpvr/hdpvr.o drivers/media/usb/hdpvr/hdpvr.mod.o;  true
