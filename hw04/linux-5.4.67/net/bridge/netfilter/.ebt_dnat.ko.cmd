cmd_net/bridge/netfilter/ebt_dnat.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/bridge/netfilter/ebt_dnat.ko net/bridge/netfilter/ebt_dnat.o net/bridge/netfilter/ebt_dnat.mod.o;  true
