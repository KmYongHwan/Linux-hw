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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x815588a6, "clk_enable" },
	{ 0x95a51d36, "snd_soc_dapm_del_routes" },
	{ 0x3ad937c3, "devm_sigmadsp_init_regmap" },
	{ 0x58412e48, "regmap_raw_write" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1774b2b1, "snd_soc_dapm_new_controls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9ef21a03, "sigmadsp_attach" },
	{ 0xae620be9, "adau_calc_pll_cfg" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0xd1cfa893, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xf7562444, "snd_soc_dapm_add_routes" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdd450d90, "snd_soc_add_component_controls" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2dac9cfb, "sigmadsp_setup" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0x9bf0bc2c, "sigmadsp_restrict_params" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4603bfe3, "snd_soc_component_test_bits" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3e8d9e8c, "snd_soc_dapm_mux_update_power" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-sigmadsp-regmap,snd-soc-sigmadsp,snd-soc-adau-utils");


MODULE_INFO(srcversion, "BC8B7DBEA3E9ECDAB434156");
