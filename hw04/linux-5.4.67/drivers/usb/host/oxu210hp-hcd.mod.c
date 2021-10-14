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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x1f58e882, "platform_bus_type" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x996c2d4c, "usb_hcd_resume_root_hub" },
	{ 0x306270cd, "usb_hcd_poll_rh_status" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x1000e51, "schedule" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a608ef0, "usb_hcd_giveback_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x854d740b, "usb_hc_died" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96848186, "scnprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0x9c8cf3a7, "usb_add_hcd" },
	{ 0xa3e81544, "usb_create_hcd" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x92418c3f, "usb_put_hcd" },
	{ 0xc2a01d7e, "usb_remove_hcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A8786E46EE88A57BE34E909");
