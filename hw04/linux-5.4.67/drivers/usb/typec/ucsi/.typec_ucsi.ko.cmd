cmd_drivers/usb/typec/ucsi/typec_ucsi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/typec/ucsi/typec_ucsi.ko drivers/usb/typec/ucsi/typec_ucsi.o drivers/usb/typec/ucsi/typec_ucsi.mod.o;  true
