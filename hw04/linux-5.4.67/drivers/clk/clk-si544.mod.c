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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc400e07a, "devm_clk_hw_register" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csilabs,si544a");
MODULE_ALIAS("of:N*T*Csilabs,si544aC*");
MODULE_ALIAS("of:N*T*Csilabs,si544b");
MODULE_ALIAS("of:N*T*Csilabs,si544bC*");
MODULE_ALIAS("of:N*T*Csilabs,si544c");
MODULE_ALIAS("of:N*T*Csilabs,si544cC*");
MODULE_ALIAS("i2c:si544a");
MODULE_ALIAS("i2c:si544b");
MODULE_ALIAS("i2c:si544c");

MODULE_INFO(srcversion, "F439273CF9FE972437F880C");
