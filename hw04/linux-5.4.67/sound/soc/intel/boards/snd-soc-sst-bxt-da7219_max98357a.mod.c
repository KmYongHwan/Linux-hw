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
	{ 0x323ad9a7, "snd_pcm_hw_constraint_msbits" },
	{ 0x3bde82d6, "snd_soc_pm_ops" },
	{ 0xaaac6841, "snd_soc_dapm_info_pin_switch" },
	{ 0xd2c64ad, "snd_soc_dapm_put_pin_switch" },
	{ 0xfe7d3a85, "snd_soc_dai_set_pll" },
	{ 0x5a52adb4, "da7219_aad_jack_det" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x7bd09e71, "snd_jack_set_key" },
	{ 0xf7562444, "snd_soc_dapm_add_routes" },
	{ 0xf585b6b8, "hdac_hdmi_jack_port_init" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x887e409d, "snd_soc_dapm_ignore_suspend" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf05a1858, "snd_soc_dapm_get_pin_switch" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x22c57021, "snd_soc_dai_set_sysclk" },
	{ 0xe718cc33, "snd_soc_card_jack_new" },
	{ 0x28f128c5, "hdac_hdmi_jack_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8303ac5, "x86_match_cpu" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-da7219,snd,snd-soc-hdac-hdmi");


MODULE_INFO(srcversion, "BC2C08749747379044B6759");
