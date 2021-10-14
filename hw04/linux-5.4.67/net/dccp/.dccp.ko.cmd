cmd_net/dccp/dccp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/dccp/dccp.ko net/dccp/dccp.o net/dccp/dccp.mod.o;  true
