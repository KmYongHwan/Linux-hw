cmd_net/wimax/wimax.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/wimax/wimax.ko net/wimax/wimax.o net/wimax/wimax.mod.o;  true
