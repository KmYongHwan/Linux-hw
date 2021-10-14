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
	{ 0x9680192c, "devm_snd_soc_register_card" },
	{ 0xaaac6841, "snd_soc_dapm_info_pin_switch" },
	{ 0xd2c64ad, "snd_soc_dapm_put_pin_switch" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0xbd2eb0eb, "snd_soc_dai_set_bclk_ratio" },
	{ 0xf05a1858, "snd_soc_dapm_get_pin_switch" },
	{ 0x7ea19302, "put_device" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x53d23fb4, "snd_soc_component_set_jack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x22c57021, "snd_soc_dai_set_sysclk" },
	{ 0xe718cc33, "snd_soc_card_jack_new" },
	{ 0x4780b1f2, "snd_soc_dai_set_fmt" },
	{ 0x605adfe9, "snd_pcm_hw_constraint_minmax" },
	{ 0xfb67e2a3, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x605e6974, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "79969FBE30FA84B31E92E1A");
