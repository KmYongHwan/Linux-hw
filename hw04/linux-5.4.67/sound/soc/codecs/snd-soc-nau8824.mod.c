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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x8fcc04c4, "snd_soc_dapm_force_bias_level" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x7ab723d, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0x6f753db3, "snd_soc_dapm_force_enable_pin" },
	{ 0x60d1a995, "snd_soc_dapm_disable_pin" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xcf2a6966, "up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x635e47bb, "snd_soc_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("acpi*:10508824:*");
MODULE_ALIAS("i2c:nau8824");

MODULE_INFO(srcversion, "618F38655DB99449FE1D88C");
