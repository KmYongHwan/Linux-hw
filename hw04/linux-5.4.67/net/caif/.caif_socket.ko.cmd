cmd_net/caif/caif_socket.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/caif/caif_socket.ko net/caif/caif_socket.o net/caif/caif_socket.mod.o;  true
