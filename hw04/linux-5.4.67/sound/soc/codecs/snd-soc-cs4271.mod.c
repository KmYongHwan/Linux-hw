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
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4a6704bc, "devm_gpio_request" },
	{ 0x826c3a9c, "regcache_sync" },
};

MODULE_INFO(depends, "snd-soc-core,snd");


MODULE_INFO(srcversion, "C449E6DCEBC4D03AAB30350");
