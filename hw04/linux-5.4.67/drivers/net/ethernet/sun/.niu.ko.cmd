cmd_drivers/net/ethernet/sun/niu.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ethernet/sun/niu.ko drivers/net/ethernet/sun/niu.o drivers/net/ethernet/sun/niu.mod.o;  true
