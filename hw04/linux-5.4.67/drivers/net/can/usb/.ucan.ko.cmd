cmd_drivers/net/can/usb/ucan.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/can/usb/ucan.ko drivers/net/can/usb/ucan.o drivers/net/can/usb/ucan.mod.o;  true
