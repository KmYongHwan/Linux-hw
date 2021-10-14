cmd_net/x25/x25.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/x25/x25.ko net/x25/x25.o net/x25/x25.mod.o;  true
