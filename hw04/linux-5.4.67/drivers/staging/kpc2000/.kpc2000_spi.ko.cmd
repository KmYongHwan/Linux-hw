cmd_drivers/staging/kpc2000/kpc2000_spi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/staging/kpc2000/kpc2000_spi.ko drivers/staging/kpc2000/kpc2000_spi.o drivers/staging/kpc2000/kpc2000_spi.mod.o;  true
