cmd_drivers/staging/rtl8723bs/r8723bs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/staging/rtl8723bs/r8723bs.ko drivers/staging/rtl8723bs/r8723bs.o drivers/staging/rtl8723bs/r8723bs.mod.o;  true
