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
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x1ece4a4a, "usb_stor_adjust_quirks" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0xaf19b82e, "blk_queue_update_dma_alignment" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x299bfb12, "usb_lock_device_for_reset" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xba18006f, "scsi_report_bus_reset" },
	{ 0x7c007f57, "usb_alloc_streams" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x674829b1, "usb_get_urb" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xca9b96b9, "scsi_print_command" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0xb28a5591, "scsi_unblock_requests" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x296a43df, "scsi_block_requests" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40555496, "usb_reset_device" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x15af7f4, "system_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1a7a60b, "usb_free_streams" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v054Cp087Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp105Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");

MODULE_INFO(srcversion, "772E35D05A66EDC659368D2");
