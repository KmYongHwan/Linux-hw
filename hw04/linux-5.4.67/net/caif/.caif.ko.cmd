cmd_net/caif/caif.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/caif/caif.ko net/caif/caif.o net/caif/caif.mod.o;  true
