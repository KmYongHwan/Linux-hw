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
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xdf786131, "regcache_cache_bypass" },
	{ 0xd7fb6bfc, "dapm_regulator_event" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x17ac8889, "devm_regulator_register_notifier" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe4413db4, "clk_get" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0x472c75e2, "dapm_clock_event" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cmaxim,max9860");
MODULE_ALIAS("of:N*T*Cmaxim,max9860C*");
MODULE_ALIAS("i2c:max9860");

MODULE_INFO(srcversion, "2205F1DB0E55C3B003F222A");
