cmd_drivers/net/dsa/microchip/ksz_common.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/dsa/microchip/ksz_common.ko drivers/net/dsa/microchip/ksz_common.o drivers/net/dsa/microchip/ksz_common.mod.o;  true
