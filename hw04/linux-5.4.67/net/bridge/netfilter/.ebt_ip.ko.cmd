cmd_net/bridge/netfilter/ebt_ip.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/bridge/netfilter/ebt_ip.ko net/bridge/netfilter/ebt_ip.o net/bridge/netfilter/ebt_ip.mod.o;  true
