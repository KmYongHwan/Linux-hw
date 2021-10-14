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
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2d6e4a02, "scsi_remove_target" },
	{ 0xee6537d9, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x5b0f9990, "scsi_flush_work" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x3a5f56f, "scsi_scan_target" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xca9b96b9, "scsi_print_command" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x84e1777c, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xb6f7270a, "device_add" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x5f4c3621, "scsi_target_unblock" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1953c958, "mempool_create" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x2af970a3, "device_initialize" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x129de197, "scsi_target_block" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001137d00000046sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CC64DD76505C0310AE79880");
