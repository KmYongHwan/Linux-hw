cmd_arch/x86/crypto/nhpoly1305-sse2.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o arch/x86/crypto/nhpoly1305-sse2.ko arch/x86/crypto/nhpoly1305-sse2.o arch/x86/crypto/nhpoly1305-sse2.mod.o;  true
