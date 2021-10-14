cmd_block/bfq.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o block/bfq.ko block/bfq.o block/bfq.mod.o;  true
