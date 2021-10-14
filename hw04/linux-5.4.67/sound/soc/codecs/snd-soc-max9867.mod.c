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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x8fcc04c4, "snd_soc_dapm_force_bias_level" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cmaxim,max9867");
MODULE_ALIAS("of:N*T*Cmaxim,max9867C*");
MODULE_ALIAS("i2c:max9867");

MODULE_INFO(srcversion, "76ED0AF0D5F93C9E130E910");
