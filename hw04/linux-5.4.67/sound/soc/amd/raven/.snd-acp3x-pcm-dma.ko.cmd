cmd_sound/soc/amd/raven/snd-acp3x-pcm-dma.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/soc/amd/raven/snd-acp3x-pcm-dma.ko sound/soc/amd/raven/snd-acp3x-pcm-dma.o sound/soc/amd/raven/snd-acp3x-pcm-dma.mod.o;  true
