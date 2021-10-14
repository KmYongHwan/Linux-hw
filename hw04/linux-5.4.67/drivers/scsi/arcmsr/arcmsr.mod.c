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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x84b88922, "scsi_remove_device" },
	{ 0x8ac3fb71, "scsi_bios_ptable" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afe9a77, "scsi_partsize" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000017D3d00001110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001210sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001214sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001230sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001260sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001280sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001884sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2AC00BF99B6869D9C7844F6");
