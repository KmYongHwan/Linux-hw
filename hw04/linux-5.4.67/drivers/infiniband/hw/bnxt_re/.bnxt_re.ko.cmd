cmd_drivers/infiniband/hw/bnxt_re/bnxt_re.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/infiniband/hw/bnxt_re/bnxt_re.ko drivers/infiniband/hw/bnxt_re/bnxt_re.o drivers/infiniband/hw/bnxt_re/bnxt_re.mod.o;  true
