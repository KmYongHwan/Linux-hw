cmd_net/netfilter/ipset/ip_set.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/netfilter/ipset/ip_set.ko net/netfilter/ipset/ip_set.o net/netfilter/ipset/ip_set.mod.o;  true
