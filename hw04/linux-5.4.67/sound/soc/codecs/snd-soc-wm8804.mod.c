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
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x7e106b92, "snd_soc_component_update_bits" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0xd1cfa893, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17ac8889, "devm_regulator_register_notifier" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xcd59c1ca, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x4603bfe3, "snd_soc_component_test_bits" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xbe34a60d, "snd_soc_component_read32" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "D2403AD73256C0D4A3B2B9D");
