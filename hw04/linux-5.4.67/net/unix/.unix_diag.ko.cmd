cmd_net/unix/unix_diag.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/unix/unix_diag.ko net/unix/unix_diag.o net/unix/unix_diag.mod.o;  true
