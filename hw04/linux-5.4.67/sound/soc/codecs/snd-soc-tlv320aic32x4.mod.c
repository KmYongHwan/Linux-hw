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
	{ 0x1912be44, "clk_hw_register_clkdev" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x7e106b92, "snd_soc_component_update_bits" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0xe88346b7, "devm_clk_register" },
	{ 0xc5850110, "printk" },
	{ 0xdd450d90, "snd_soc_add_component_controls" },
	{ 0xfcf15af8, "dev_get_regmap" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xb88feefe, "devm_clk_bulk_get" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xcd59c1ca, "snd_soc_component_write" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0xbe34a60d, "snd_soc_component_read32" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "F3254F2A2C2A903DD1FAE0F");
