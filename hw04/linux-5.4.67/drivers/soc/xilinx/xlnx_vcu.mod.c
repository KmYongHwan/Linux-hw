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
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe484e35f, "ioread32" },
	{ 0x815588a6, "clk_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5f0b2042, "devm_ioremap_nocache" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,vcu");
MODULE_ALIAS("of:N*T*Cxlnx,vcuC*");
MODULE_ALIAS("of:N*T*Cxlnx,vcu-logicoreip-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,vcu-logicoreip-1.0C*");

MODULE_INFO(srcversion, "5D5DC8C4DE0F73895CD9635");
