cmd_drivers/input/misc/ideapad_slidebar.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/misc/ideapad_slidebar.ko drivers/input/misc/ideapad_slidebar.o drivers/input/misc/ideapad_slidebar.mod.o;  true
