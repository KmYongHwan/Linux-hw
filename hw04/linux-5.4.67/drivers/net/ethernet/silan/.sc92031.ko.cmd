cmd_drivers/net/ethernet/silan/sc92031.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ethernet/silan/sc92031.ko drivers/net/ethernet/silan/sc92031.o drivers/net/ethernet/silan/sc92031.mod.o;  true
