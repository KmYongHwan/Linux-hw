cmd_drivers/tty/serial/jsm/jsm.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/tty/serial/jsm/jsm.o drivers/tty/serial/jsm/jsm_driver.o drivers/tty/serial/jsm/jsm_neo.o drivers/tty/serial/jsm/jsm_tty.o drivers/tty/serial/jsm/jsm_cls.o
