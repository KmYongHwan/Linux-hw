cmd_drivers/mtd/nftl.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/nftl.ko drivers/mtd/nftl.o drivers/mtd/nftl.mod.o;  true
