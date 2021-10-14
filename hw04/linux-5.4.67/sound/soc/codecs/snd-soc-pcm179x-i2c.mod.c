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
	{ 0x7b922dbc, "pcm179x_common_init" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xada6d40b, "pcm179x_regmap_config" },
};

MODULE_INFO(depends, "snd-soc-pcm179x-codec");

MODULE_ALIAS("of:N*T*Cti,pcm1792a");
MODULE_ALIAS("of:N*T*Cti,pcm1792aC*");
MODULE_ALIAS("i2c:pcm179x");

MODULE_INFO(srcversion, "11FDF0BD8C69E46EDE4A63E");
