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
	{ 0x50877b9, "dmi_first_match" },
	{ 0x9680192c, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaaac6841, "snd_soc_dapm_info_pin_switch" },
	{ 0x349cc11, "device_match_name" },
	{ 0xd2c64ad, "snd_soc_dapm_put_pin_switch" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7bd09e71, "snd_jack_set_key" },
	{ 0xf7562444, "snd_soc_dapm_add_routes" },
	{ 0xf006a2ef, "i2c_bus_type" },
	{ 0xa32b6a46, "device_add_properties" },
	{ 0xfe50ef42, "bus_find_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0xf05a1858, "snd_soc_dapm_get_pin_switch" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x53d23fb4, "snd_soc_component_set_jack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x22c57021, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe718cc33, "snd_soc_card_jack_new" },
	{ 0x4780b1f2, "snd_soc_dai_set_fmt" },
	{ 0x605adfe9, "snd_pcm_hw_constraint_minmax" },
	{ 0x1596983c, "gpiod_get_index" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xfb67e2a3, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0x605e6974, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");


MODULE_INFO(srcversion, "5C7B1137603A1212DF87121");
