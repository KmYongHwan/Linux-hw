cmd_net/6lowpan/nhc_dest.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/6lowpan/nhc_dest.ko net/6lowpan/nhc_dest.o net/6lowpan/nhc_dest.mod.o;  true
