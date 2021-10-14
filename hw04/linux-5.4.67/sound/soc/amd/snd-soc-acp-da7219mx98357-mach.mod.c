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
	{ 0x9680192c, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3bde82d6, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaaac6841, "snd_soc_dapm_info_pin_switch" },
	{ 0xd2c64ad, "snd_soc_dapm_put_pin_switch" },
	{ 0xfe7d3a85, "snd_soc_dai_set_pll" },
	{ 0x5a52adb4, "da7219_aad_jack_det" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x7bd09e71, "snd_jack_set_key" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf05a1858, "snd_soc_dapm_get_pin_switch" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x22c57021, "snd_soc_dai_set_sysclk" },
	{ 0xe4413db4, "clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe718cc33, "snd_soc_card_jack_new" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0xea74f232, "bt_uart_enable" },
	{ 0x2bc97e5a, "device_property_present" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-da7219,snd,acp_audio_dma");

MODULE_ALIAS("acpi*:AMD7219:*");

MODULE_INFO(srcversion, "628FA9BBE94B82ED08B6662");
