cmd_drivers/pinctrl/intel/pinctrl-sunrisepoint.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/pinctrl/intel/pinctrl-sunrisepoint.ko drivers/pinctrl/intel/pinctrl-sunrisepoint.o drivers/pinctrl/intel/pinctrl-sunrisepoint.mod.o;  true
