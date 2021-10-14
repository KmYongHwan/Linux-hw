cmd_drivers/spmi/spmi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/spmi/spmi.ko drivers/spmi/spmi.o drivers/spmi/spmi.mod.o;  true
