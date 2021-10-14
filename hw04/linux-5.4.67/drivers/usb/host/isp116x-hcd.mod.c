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
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x55d40be2, "usb_hcd_link_urb_to_ep" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x854d740b, "usb_hc_died" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x996c2d4c, "usb_hcd_resume_root_hub" },
	{ 0xbc5d28ab, "usb_hcd_check_unlink_urb" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9a608ef0, "usb_hcd_giveback_urb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd363d3b8, "usb_hcd_unlink_urb_from_ep" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0x9c8cf3a7, "usb_add_hcd" },
	{ 0xa3e81544, "usb_create_hcd" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf9a482f9, "msleep" },
	{ 0x92418c3f, "usb_put_hcd" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc2a01d7e, "usb_remove_hcd" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C391A44C354E9D5516943CE");
