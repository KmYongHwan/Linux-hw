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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0xacb25d00, "nvmet_sq_init" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x1b280138, "nvmet_req_execute" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xffb7c514, "ida_free" },
	{ 0xdd83759d, "nvmet_register_transport" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x637b29db, "nvmet_req_init" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x950bd0d0, "nvmet_unregister_transport" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x649b8c7f, "nvmet_sq_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x386a2c0a, "nvmet_req_complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "nvmet");


MODULE_INFO(srcversion, "6BD3E7AC2C3193551CA02C6");
