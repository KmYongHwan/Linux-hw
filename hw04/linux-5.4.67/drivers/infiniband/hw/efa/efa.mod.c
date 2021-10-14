#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xf90504f0, "ib_set_device_ops" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x56470118, "__warn_printk" },
	{ 0x186e6575, "ibdev_err" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfea8ccd8, "rdma_user_mmap_io" },
	{ 0x1c1bb695, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x635fa2ab, "ibdev_info" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3e5896e, "ib_query_port" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xd62ebcf7, "ib_umem_get" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x6626afca, "down" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf4358872, "devm_kfree" },
	{ 0xc7a4124b, "vm_insert_page" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x25d78014, "ib_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb945d768, "ib_unregister_device" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x36728730, "_ib_alloc_device" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e7528da, "__rdma_block_iter_next" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc7d12dc, "__dynamic_ibdev_dbg" },
	{ 0xc102fc87, "ib_umem_find_best_pgsz" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0xcf2a6966, "up" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xcb231a00, "devm_iounmap" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0xef53f3b5, "pci_enable_device_mem" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xfe31ba97, "pci_release_selected_regions" },
	{ 0xd8a909f7, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1b037462, "__rdma_block_iter_start" },
	{ 0x20ba1a75, "ib_umem_release" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");

MODULE_ALIAS("pci:v00001D0Fd0000EFA0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C4398A30ECF594C3943BEE5");
