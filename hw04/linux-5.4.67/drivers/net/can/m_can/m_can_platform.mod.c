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
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x336d6dcb, "m_can_class_register" },
	{ 0xf96caeff, "m_can_init_ram" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0x670f8a03, "m_can_class_get_clocks" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xd7667509, "m_can_class_allocate_dev" },
	{ 0x8b591624, "m_can_class_unregister" },
	{ 0xb35d40b6, "m_can_class_resume" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5541f7c0, "m_can_class_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "m_can");

MODULE_ALIAS("of:N*T*Cbosch,m_can");
MODULE_ALIAS("of:N*T*Cbosch,m_canC*");

MODULE_INFO(srcversion, "1E650EEF870147837227BA0");
