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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xef697afc, "gb_gbphy_register_driver" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x226439c8, "irq_to_desc" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0x709bc494, "gb_connection_disable_rx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0x148fa2d1, "gpiochip_irqchip_add_key" },
	{ 0x7de887e5, "gb_gbphy_deregister_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x23a6d701, "gb_connection_enable_tx" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5dc4578a, "gb_operation_sync_timeout" },
	{ 0x5c03fd94, "gb_connection_destroy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x2345868f, "gb_connection_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x563a20e5, "gb_connection_create" },
	{ 0x61ea921a, "gb_connection_disable" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc07c9d98, "handle_level_irq" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "D1A916DAA231D822A59C9CC");
