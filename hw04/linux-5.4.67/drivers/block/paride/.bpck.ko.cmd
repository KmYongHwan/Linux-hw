cmd_drivers/block/paride/bpck.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/paride/bpck.ko drivers/block/paride/bpck.o drivers/block/paride/bpck.mod.o;  true
