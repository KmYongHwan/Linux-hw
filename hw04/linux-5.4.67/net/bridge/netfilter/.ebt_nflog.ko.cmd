cmd_net/bridge/netfilter/ebt_nflog.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/bridge/netfilter/ebt_nflog.ko net/bridge/netfilter/ebt_nflog.o net/bridge/netfilter/ebt_nflog.mod.o;  true
