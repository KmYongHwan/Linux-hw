cmd_sound/hda/snd-intel-nhlt.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/hda/snd-intel-nhlt.ko sound/hda/snd-intel-nhlt.o sound/hda/snd-intel-nhlt.mod.o;  true
