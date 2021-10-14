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
	{ 0xe860f935, "pnp_unregister_driver" },
	{ 0x132af893, "pnp_register_driver" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0x285b7638, "devm_rc_register_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x90b8ab4c, "pnp_get_resource" },
	{ 0x29c8d3d3, "pnp_activate_dev" },
	{ 0xd07cbad8, "devm_rc_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8f226906, "ir_raw_event_store" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x1907fe72, "ir_raw_event_handle" },
	{ 0x6346cf09, "ir_raw_event_store_with_filter" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x3131b773, "ir_raw_encode_scancode" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe0b13336, "argv_free" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7380dffa, "argv_split" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dWEC0530*");
MODULE_ALIAS("acpi*:WEC0530:*");
MODULE_ALIAS("pnp:dNTN0530*");
MODULE_ALIAS("acpi*:NTN0530:*");

MODULE_INFO(srcversion, "4D6C1E6D9678F07878C14EB");
