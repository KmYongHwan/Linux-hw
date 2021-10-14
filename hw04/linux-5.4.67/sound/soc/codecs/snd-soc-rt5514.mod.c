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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x61ff58e3, "rt5514_spi_burst_read" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xf60888f1, "regmap_register_patch" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0x4074809f, "regmap_multi_reg_write" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0xff87892f, "rt5514_spi_burst_write" },
	{ 0x7f68b24d, "rl6231_pll_calc" },
	{ 0x71deb539, "request_firmware" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0xede283d, "release_firmware" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-rt5514-spi,snd-soc-core,snd-soc-rl6231");

MODULE_ALIAS("i2c:rt5514");
MODULE_ALIAS("acpi*:10EC5514:*");

MODULE_INFO(srcversion, "640583C9F6CA923D73E50F5");
