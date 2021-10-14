cmd_crypto/842.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/842.ko crypto/842.o crypto/842.mod.o;  true
