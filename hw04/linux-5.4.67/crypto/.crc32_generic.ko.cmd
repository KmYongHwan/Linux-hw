cmd_crypto/crc32_generic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/crc32_generic.ko crypto/crc32_generic.o crypto/crc32_generic.mod.o;  true
