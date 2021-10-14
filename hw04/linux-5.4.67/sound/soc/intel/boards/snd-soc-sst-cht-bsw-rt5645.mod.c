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
	{ 0x9680192c, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaaac6841, "snd_soc_dapm_info_pin_switch" },
	{ 0xd2c64ad, "snd_soc_dapm_put_pin_switch" },
	{ 0xfe7d3a85, "snd_soc_dai_set_pll" },
	{ 0x6232b50f, "rt5645_set_jack_detect" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xf7562444, "snd_soc_dapm_add_routes" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x5a921311, "strncmp" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf05a1858, "snd_soc_dapm_get_pin_switch" },
	{ 0x6519285a, "rt5645_sel_asrc_clk_src" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x22c57021, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe718cc33, "snd_soc_card_jack_new" },
	{ 0x4780b1f2, "snd_soc_dai_set_fmt" },
	{ 0x605adfe9, "snd_pcm_hw_constraint_minmax" },
	{ 0xfb67e2a3, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x6c5d2bcd, "snd_soc_acpi_find_package_from_hid" },
	{ 0x605e6974, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-rt5645,snd-pcm,snd-soc-acpi");


MODULE_INFO(srcversion, "B7A89B4446CABB915E39AB9");
