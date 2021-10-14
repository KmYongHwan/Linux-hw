cmd_mm/z3fold.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o mm/z3fold.ko mm/z3fold.o mm/z3fold.mod.o;  true
