cmd_drivers/media/v4l2-core/videobuf-dma-sg.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/v4l2-core/videobuf-dma-sg.ko drivers/media/v4l2-core/videobuf-dma-sg.o drivers/media/v4l2-core/videobuf-dma-sg.mod.o;  true
