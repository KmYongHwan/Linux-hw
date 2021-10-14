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
	{ 0xa093771, "pcm3168a_probe" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xd643f9e1, "pcm3168a_remove" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa93c9b3e, "pcm3168a_pm_ops" },
	{ 0x31de2593, "pcm3168a_regmap" },
};

MODULE_INFO(depends, "snd-soc-pcm3168a");

MODULE_ALIAS("of:N*T*Cti,pcm3168a");
MODULE_ALIAS("of:N*T*Cti,pcm3168aC*");
MODULE_ALIAS("i2c:pcm3168a");

MODULE_INFO(srcversion, "A9DE57AD5CE903B002AD327");
