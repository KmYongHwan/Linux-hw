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
	{ 0x826c3a9c, "regcache_sync" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0xc400e07a, "devm_clk_hw_register" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xea124bd1, "gcd" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xbb7216c7, "clk_hw_get_flags" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csilabs,si5340");
MODULE_ALIAS("of:N*T*Csilabs,si5340C*");
MODULE_ALIAS("of:N*T*Csilabs,si5341");
MODULE_ALIAS("of:N*T*Csilabs,si5341C*");
MODULE_ALIAS("i2c:si5340");
MODULE_ALIAS("i2c:si5341");

MODULE_INFO(srcversion, "D05880DCCEEE536C90FB83E");
