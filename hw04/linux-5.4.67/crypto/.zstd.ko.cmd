cmd_crypto/zstd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/zstd.ko crypto/zstd.o crypto/zstd.mod.o;  true
