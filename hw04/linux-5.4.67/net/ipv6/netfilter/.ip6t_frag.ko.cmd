cmd_net/ipv6/netfilter/ip6t_frag.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ipv6/netfilter/ip6t_frag.ko net/ipv6/netfilter/ip6t_frag.o net/ipv6/netfilter/ip6t_frag.mod.o;  true
