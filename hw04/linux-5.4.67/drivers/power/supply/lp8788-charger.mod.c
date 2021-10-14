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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x475e1776, "iio_read_channel_processed" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x865a3f99, "devm_iio_channel_get" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3585a321, "lp8788_write_byte" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xafa1a6e1, "lp8788_read_byte" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "AA30437F76D100BA9E9C85C");
