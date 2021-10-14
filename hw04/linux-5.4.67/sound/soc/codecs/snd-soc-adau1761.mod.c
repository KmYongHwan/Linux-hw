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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x5a534529, "adau17x1_precious_register" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xe22c1c5e, "adau17x1_add_widgets" },
	{ 0xd86629f8, "adau17x1_resume" },
	{ 0x1774b2b1, "snd_soc_dapm_new_controls" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0xf7562444, "snd_soc_dapm_add_routes" },
	{ 0xdd450d90, "snd_soc_add_component_controls" },
	{ 0x4725ed9d, "adau17x1_probe" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0x9e9e51de, "adau17x1_volatile_register" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xc0819e1c, "adau17x1_dai_ops" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0x2b7ee9f1, "adau17x1_readable_register" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0x5d82ea9c, "adau17x1_add_routes" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-adau17x1,snd-soc-core");


MODULE_INFO(srcversion, "3BE60EF996A73FA0FEB2F6C");
