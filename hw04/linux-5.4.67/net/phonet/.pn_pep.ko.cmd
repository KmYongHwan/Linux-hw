cmd_net/phonet/pn_pep.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/phonet/pn_pep.ko net/phonet/pn_pep.o net/phonet/pn_pep.mod.o;  true
