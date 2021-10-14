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
	{ 0xcb5bba2a, "madera_pm_ops" },
	{ 0x1bb8f18e, "cs47l15_16bit_i2c_regmap" },
	{ 0xcc5dac77, "cs47l92_16bit_i2c_regmap" },
	{ 0xb8e9aa86, "cs47l90_16bit_i2c_regmap" },
	{ 0xe3041c7a, "cs47l85_16bit_i2c_regmap" },
	{ 0xd1768702, "cs47l35_16bit_i2c_regmap" },
	{ 0x1bb52dce, "cs47l15_32bit_i2c_regmap" },
	{ 0xcc507037, "cs47l92_32bit_i2c_regmap" },
	{ 0xb8e476c6, "cs47l90_32bit_i2c_regmap" },
	{ 0xe309c03a, "cs47l85_32bit_i2c_regmap" },
	{ 0xd17b5b42, "cs47l35_32bit_i2c_regmap" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe08295c8, "madera_dev_init" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xebe384cb, "madera_name_from_type" },
	{ 0xde2f691b, "madera_dev_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "madera");

MODULE_ALIAS("i2c:cs47l15");
MODULE_ALIAS("i2c:cs47l35");
MODULE_ALIAS("i2c:cs47l85");
MODULE_ALIAS("i2c:cs47l90");
MODULE_ALIAS("i2c:cs47l91");
MODULE_ALIAS("i2c:cs42l92");
MODULE_ALIAS("i2c:cs47l92");
MODULE_ALIAS("i2c:cs47l93");
MODULE_ALIAS("i2c:wm1840");

MODULE_INFO(srcversion, "A93539683DB2905A3C4FBF2");
