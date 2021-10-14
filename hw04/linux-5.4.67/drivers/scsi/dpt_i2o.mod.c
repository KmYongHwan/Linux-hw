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
	{ 0x752832c, "noop_llseek" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x88e96942, "device_create" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x66414bc7, "__class_create" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x76da24f6, "dma_get_required_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x296a43df, "scsi_block_requests" },
	{ 0xb28a5591, "scsi_unblock_requests" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9166fada, "strncpy" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x6a8ae03, "scsi_device_set_state" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xba312d7b, "current_task" },
	{ 0x7cd8d75e, "page_offset_base" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfb578fc5, "memset" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xc5850110, "printk" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xc4142837, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001044d0000A501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001044d0000A511sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0859761106C00AE9D68CC65");
