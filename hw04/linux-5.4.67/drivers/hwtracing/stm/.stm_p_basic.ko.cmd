cmd_drivers/hwtracing/stm/stm_p_basic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwtracing/stm/stm_p_basic.ko drivers/hwtracing/stm/stm_p_basic.o drivers/hwtracing/stm/stm_p_basic.mod.o;  true
