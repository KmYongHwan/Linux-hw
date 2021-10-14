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
	{ 0x890b3d61, "_dev_err" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x90b8ab4c, "pnp_get_resource" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f226906, "ir_raw_event_store" },
	{ 0x1907fe72, "ir_raw_event_handle" },
	{ 0x6346cf09, "ir_raw_event_store_with_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dFIT0002*");
MODULE_ALIAS("acpi*:FIT0002:*");

MODULE_INFO(srcversion, "16E9BC7682DCA9C69E5BAAE");
