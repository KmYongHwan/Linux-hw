cmd_net/dccp/dccp_ipv6.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/dccp/dccp_ipv6.ko net/dccp/dccp_ipv6.o net/dccp/dccp_ipv6.mod.o;  true
