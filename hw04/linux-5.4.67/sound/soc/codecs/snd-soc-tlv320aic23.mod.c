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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7e106b92, "snd_soc_component_update_bits" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0xc5850110, "printk" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xcd59c1ca, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0xbe34a60d, "snd_soc_component_read32" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "12EFC0D031EFED9F428D6F0");
