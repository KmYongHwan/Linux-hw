cmd_net/netfilter/nft_log.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/netfilter/nft_log.ko net/netfilter/nft_log.o net/netfilter/nft_log.mod.o;  true
