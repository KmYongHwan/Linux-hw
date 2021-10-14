cmd_net/hsr/hsr.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/hsr/hsr.ko net/hsr/hsr.o net/hsr/hsr.mod.o;  true
