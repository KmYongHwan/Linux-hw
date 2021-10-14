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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x58412e48, "regmap_raw_write" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xf60888f1, "regmap_register_patch" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xdf786131, "regcache_cache_bypass" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe1ca0830, "device_get_named_child_node" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7e106b92, "snd_soc_component_update_bits" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xf464add, "fwnode_property_read_string" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0x7b5c1c71, "snd_soc_put_volsw_range" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xe88346b7, "devm_clk_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x23723fb4, "snd_soc_info_volsw_range" },
	{ 0x797f9fe, "device_property_read_string_array" },
	{ 0x8fcc04c4, "snd_soc_dapm_force_bias_level" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0x67f79f65, "snd_soc_get_volsw_range" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x7ab723d, "snd_soc_dapm_sync" },
	{ 0xcd59c1ca, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0x6f753db3, "snd_soc_dapm_force_enable_pin" },
	{ 0x60d1a995, "snd_soc_dapm_disable_pin" },
	{ 0x1b7d4dbf, "regcache_sync_region" },
	{ 0x1e253b77, "regmap_raw_read" },
	{ 0x272b4e9, "clkdev_drop" },
	{ 0x3b47a4d, "clkdev_create" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x635e47bb, "snd_soc_jack_report" },
	{ 0xbe34a60d, "snd_soc_component_read32" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("acpi*:DLGS7219:*");
MODULE_ALIAS("i2c:da7219");
MODULE_ALIAS("of:N*T*Cdlg,da7219");
MODULE_ALIAS("of:N*T*Cdlg,da7219C*");

MODULE_INFO(srcversion, "6DA7CFCF5D9593DAAF54ABE");
