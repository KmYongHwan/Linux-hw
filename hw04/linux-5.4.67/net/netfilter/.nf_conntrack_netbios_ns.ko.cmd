cmd_net/netfilter/nf_conntrack_netbios_ns.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/netfilter/nf_conntrack_netbios_ns.ko net/netfilter/nf_conntrack_netbios_ns.o net/netfilter/nf_conntrack_netbios_ns.mod.o;  true
