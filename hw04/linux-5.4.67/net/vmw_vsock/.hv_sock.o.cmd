cmd_net/vmw_vsock/hv_sock.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/vmw_vsock/hv_sock.o net/vmw_vsock/hyperv_transport.o
