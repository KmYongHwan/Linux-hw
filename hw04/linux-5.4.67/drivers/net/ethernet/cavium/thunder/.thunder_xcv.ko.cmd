cmd_drivers/net/ethernet/cavium/thunder/thunder_xcv.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ethernet/cavium/thunder/thunder_xcv.ko drivers/net/ethernet/cavium/thunder/thunder_xcv.o drivers/net/ethernet/cavium/thunder/thunder_xcv.mod.o;  true
