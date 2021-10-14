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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x84b88922, "scsi_remove_device" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xc4142837, "seq_printf" },
	{ 0x5f592f1d, "pcie_capability_read_dword" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x76da24f6, "dma_get_required_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6168380e, "seq_putc" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x6a8ae03, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x6d52d252, "param_ops_long" },
	{ 0xedc03953, "iounmap" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0xcf2a6966, "up" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xba18006f, "scsi_report_bus_reset" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0xa5558b7d, "proc_create" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x4ad8a919, "pcie_capability_write_word" },
	{ 0xd0065fca, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd00000049bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Abc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Bbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Cbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Dbc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000049sv0000117Csd0000004Ebc*sc*i*");

MODULE_INFO(srcversion, "6FD17F8E8CC404B05896F70");
