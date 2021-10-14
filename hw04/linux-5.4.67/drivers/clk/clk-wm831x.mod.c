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
	{ 0xc400e07a, "devm_clk_hw_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc40d89f1, "wm831x_reg_lock" },
	{ 0x2ccd1a6, "wm831x_reg_unlock" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0x95d7801d, "wm831x_set_bits" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x19ae3c48, "wm831x_reg_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0D2FB2C816B4A77EC1CE069");
