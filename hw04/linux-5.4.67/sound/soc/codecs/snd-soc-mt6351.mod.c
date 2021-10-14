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
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfcf15af8, "dev_get_regmap" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xb7edf846, "snd_soc_component_init_regmap" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "76B1387DA3669FE0EA3415A");
