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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7e106b92, "snd_soc_component_update_bits" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0x8b097b63, "devm_clk_get_optional" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd8ddb6b8, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xcd59c1ca, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc04eb232, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x35519d53, "snd_soc_dapm_sync_unlocked" },
	{ 0x635e47bb, "snd_soc_jack_report" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("i2c:es8316");
MODULE_ALIAS("of:N*T*Ceverest,es8316");
MODULE_ALIAS("of:N*T*Ceverest,es8316C*");
MODULE_ALIAS("acpi*:ESSX8316:*");

MODULE_INFO(srcversion, "215E82719F793EA48017DBD");
