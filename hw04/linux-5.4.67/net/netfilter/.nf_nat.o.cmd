cmd_net/netfilter/nf_nat.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/netfilter/nf_nat.o net/netfilter/nf_nat_core.o net/netfilter/nf_nat_proto.o net/netfilter/nf_nat_helper.o net/netfilter/nf_nat_redirect.o net/netfilter/nf_nat_masquerade.o
