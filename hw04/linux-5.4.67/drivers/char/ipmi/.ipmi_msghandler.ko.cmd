cmd_drivers/char/ipmi/ipmi_msghandler.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/char/ipmi/ipmi_msghandler.ko drivers/char/ipmi/ipmi_msghandler.o drivers/char/ipmi/ipmi_msghandler.mod.o;  true
