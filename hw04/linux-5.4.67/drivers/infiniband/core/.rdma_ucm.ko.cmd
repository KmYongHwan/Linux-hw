cmd_drivers/infiniband/core/rdma_ucm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/infiniband/core/rdma_ucm.ko drivers/infiniband/core/rdma_ucm.o drivers/infiniband/core/rdma_ucm.mod.o;  true
