cmd_drivers/block/zram/zram.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/zram/zram.ko drivers/block/zram/zram.o drivers/block/zram/zram.mod.o;  true
