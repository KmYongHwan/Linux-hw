cmd_drivers/dma/qcom/hdma.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/dma/qcom/hdma.o drivers/dma/qcom/hidma_ll.o drivers/dma/qcom/hidma.o drivers/dma/qcom/hidma_dbg.o
