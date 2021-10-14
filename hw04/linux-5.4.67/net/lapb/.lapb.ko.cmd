cmd_net/lapb/lapb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/lapb/lapb.ko net/lapb/lapb.o net/lapb/lapb.mod.o;  true
