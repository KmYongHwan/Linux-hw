cmd_drivers/block/paride/aten.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/paride/aten.ko drivers/block/paride/aten.o drivers/block/paride/aten.mod.o;  true
