cmd_fs/quota/quota_v2.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/quota/quota_v2.ko fs/quota/quota_v2.o fs/quota/quota_v2.mod.o;  true
