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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x7c8c7fff, "raid_class_release" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xfab61308, "raid_class_attach" },
	{ 0x85bd1608, "__request_region" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x87b8798d, "sg_next" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x5cd7197, "attribute_container_find_class_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0x29361773, "complete" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "raid_class");

MODULE_ALIAS("pci:v00001011d00001065sv00001069sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001069d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "254F636EED8E72C02B58EDF");
