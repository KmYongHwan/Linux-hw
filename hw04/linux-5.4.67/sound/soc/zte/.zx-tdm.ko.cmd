cmd_sound/soc/zte/zx-tdm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/soc/zte/zx-tdm.ko sound/soc/zte/zx-tdm.o sound/soc/zte/zx-tdm.mod.o;  true
