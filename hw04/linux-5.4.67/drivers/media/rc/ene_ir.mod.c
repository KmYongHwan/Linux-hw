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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xe860f935, "pnp_unregister_driver" },
	{ 0x132af893, "pnp_register_driver" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x37a0cba, "kfree" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x90b8ab4c, "pnp_get_resource" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f226906, "ir_raw_event_store" },
	{ 0x6346cf09, "ir_raw_event_store_with_filter" },
	{ 0x1907fe72, "ir_raw_event_handle" },
	{ 0x4f935459, "ir_raw_event_set_idle" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x29361773, "complete" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dENE0100*");
MODULE_ALIAS("acpi*:ENE0100:*");
MODULE_ALIAS("pnp:dENE0200*");
MODULE_ALIAS("acpi*:ENE0200:*");
MODULE_ALIAS("pnp:dENE0201*");
MODULE_ALIAS("acpi*:ENE0201:*");
MODULE_ALIAS("pnp:dENE0202*");
MODULE_ALIAS("acpi*:ENE0202:*");

MODULE_INFO(srcversion, "B6792FB119A91311902FF47");
