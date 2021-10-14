cmd_net/bluetooth/cmtp/cmtp.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/bluetooth/cmtp/cmtp.o net/bluetooth/cmtp/core.o net/bluetooth/cmtp/sock.o net/bluetooth/cmtp/capi.o
