cmd_drivers/net/rionet.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/rionet.ko drivers/net/rionet.o drivers/net/rionet.mod.o;  true
