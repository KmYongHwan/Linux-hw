cmd_drivers/input/joystick/grip_mp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/joystick/grip_mp.ko drivers/input/joystick/grip_mp.o drivers/input/joystick/grip_mp.mod.o;  true
