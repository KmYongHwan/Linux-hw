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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x752832c, "noop_llseek" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x20716107, "pci_try_set_mwi" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x296a43df, "scsi_block_requests" },
	{ 0xb28a5591, "scsi_unblock_requests" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3eeb2322, "__wake_up" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xee6537d9, "blk_queue_rq_timeout" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000013C1d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "823453F4E11F88D3193957E");
