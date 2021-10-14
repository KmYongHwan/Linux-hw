cmd_net/phonet/phonet.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/phonet/phonet.ko net/phonet/phonet.o net/phonet/phonet.mod.o;  true
