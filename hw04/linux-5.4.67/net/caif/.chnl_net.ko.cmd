cmd_net/caif/chnl_net.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/caif/chnl_net.ko net/caif/chnl_net.o net/caif/chnl_net.mod.o;  true
