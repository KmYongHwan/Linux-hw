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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xdefbea52, "default_llseek" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xfdefdbe3, "usb_debug_root" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc17515d7, "usb_hcds_loaded" },
	{ 0xc5850110, "printk" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0x9c8cf3a7, "usb_add_hcd" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe4413db4, "clk_get" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa3e81544, "usb_create_hcd" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x55d40be2, "usb_hcd_link_urb_to_ep" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x87b8798d, "sg_next" },
	{ 0x996c2d4c, "usb_hcd_resume_root_hub" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x854d740b, "usb_hc_died" },
	{ 0x306270cd, "usb_hcd_poll_rh_status" },
	{ 0xbc5d28ab, "usb_hcd_check_unlink_urb" },
	{ 0x56470118, "__warn_printk" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9a608ef0, "usb_hcd_giveback_urb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd363d3b8, "usb_hcd_unlink_urb_from_ep" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x6527a231, "dbgp_external_startup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdf1882af, "dbgp_reset_prep" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xce807a25, "up_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x57bc19d2, "down_write" },
	{ 0xbc9b8588, "ehci_cf_port_reset_rwsem" },
	{ 0x754d539c, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x999e8297, "vfree" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x66ab57c9, "usb_hub_clear_tt_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x92418c3f, "usb_put_hcd" },
	{ 0xc2a01d7e, "usb_remove_hcd" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "84BE21EB38B88D9418CFA35");
