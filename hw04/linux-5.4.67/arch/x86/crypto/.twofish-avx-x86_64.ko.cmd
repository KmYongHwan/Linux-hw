cmd_arch/x86/crypto/twofish-avx-x86_64.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o arch/x86/crypto/twofish-avx-x86_64.ko arch/x86/crypto/twofish-avx-x86_64.o arch/x86/crypto/twofish-avx-x86_64.mod.o;  true
