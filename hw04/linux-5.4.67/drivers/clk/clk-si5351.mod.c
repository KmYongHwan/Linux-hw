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
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x58412e48, "regmap_raw_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc400e07a, "devm_clk_hw_register" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5a9c4590, "clk_hw_get_name" },
	{ 0xbb7216c7, "clk_hw_get_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:si5351a");
MODULE_ALIAS("i2c:si5351a-msop");
MODULE_ALIAS("i2c:si5351b");
MODULE_ALIAS("i2c:si5351c");

MODULE_INFO(srcversion, "39BFE5B929905B3B1E63BF4");
