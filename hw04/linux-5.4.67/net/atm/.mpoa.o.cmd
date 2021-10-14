cmd_net/atm/mpoa.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/atm/mpoa.o net/atm/mpc.o net/atm/mpoa_caches.o net/atm/mpoa_proc.o
