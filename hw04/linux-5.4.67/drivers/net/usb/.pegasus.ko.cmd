cmd_drivers/net/usb/pegasus.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/usb/pegasus.ko drivers/net/usb/pegasus.o drivers/net/usb/pegasus.mod.o;  true
