cmd_drivers/net/fjes/fjes.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/net/fjes/fjes.o drivers/net/fjes/fjes_main.o drivers/net/fjes/fjes_hw.o drivers/net/fjes/fjes_ethtool.o drivers/net/fjes/fjes_trace.o drivers/net/fjes/fjes_debugfs.o
