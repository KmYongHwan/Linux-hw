cmd_drivers/input/rmi4/rmi_i2c.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/rmi4/rmi_i2c.ko drivers/input/rmi4/rmi_i2c.o drivers/input/rmi4/rmi_i2c.mod.o;  true
