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
	{ 0xf5a9f5b4, "snd_soc_get_volsw_sx" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1774b2b1, "snd_soc_dapm_new_controls" },
	{ 0x7e106b92, "snd_soc_component_update_bits" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0x9987a748, "snd_soc_info_volsw_sx" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xcd59c1ca, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xbe34a60d, "snd_soc_component_read32" },
	{ 0x472c75e2, "dapm_clock_event" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9ee4749c, "snd_soc_put_volsw_sx" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Ccirrus,cs42l51");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l51C*");

MODULE_INFO(srcversion, "E78BEAA87854E781FCB1392");
