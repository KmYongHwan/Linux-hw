cmd_sound/core/snd-timer.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/core/snd-timer.ko sound/core/snd-timer.o sound/core/snd-timer.mod.o;  true
