cmd_net/netfilter/ipvs/ip_vs_lblcr.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/netfilter/ipvs/ip_vs_lblcr.ko net/netfilter/ipvs/ip_vs_lblcr.o net/netfilter/ipvs/ip_vs_lblcr.mod.o;  true
