cmd_drivers/slimbus/slimbus.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/slimbus/slimbus.o drivers/slimbus/core.o drivers/slimbus/messaging.o drivers/slimbus/sched.o drivers/slimbus/stream.o
