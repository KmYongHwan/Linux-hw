cmd_net/netfilter/ipset/ip_set_hash_mac.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/netfilter/ipset/ip_set_hash_mac.ko net/netfilter/ipset/ip_set_hash_mac.o net/netfilter/ipset/ip_set_hash_mac.mod.o;  true
