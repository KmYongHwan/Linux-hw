cmd_net/netfilter/xt_dscp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/netfilter/xt_dscp.ko net/netfilter/xt_dscp.o net/netfilter/xt_dscp.mod.o;  true
