cmd_drivers/mfd/pcf50633.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/mfd/pcf50633.o drivers/mfd/pcf50633-core.o drivers/mfd/pcf50633-irq.o
