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
	{ 0x323ad9a7, "snd_pcm_hw_constraint_msbits" },
	{ 0x3bde82d6, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaaac6841, "snd_soc_dapm_info_pin_switch" },
	{ 0x5ca6147, "rt5663_sel_asrc_clk_src" },
	{ 0xd2c64ad, "snd_soc_dapm_put_pin_switch" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x7bd09e71, "snd_jack_set_key" },
	{ 0xf585b6b8, "hdac_hdmi_jack_port_init" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x887e409d, "snd_soc_dapm_ignore_suspend" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf05a1858, "snd_soc_dapm_get_pin_switch" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53d23fb4, "snd_soc_component_set_jack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x22c57021, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe718cc33, "snd_soc_card_jack_new" },
	{ 0x28f128c5, "hdac_hdmi_jack_init" },
	{ 0xfb67e2a3, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-rt5663,snd,snd-soc-hdac-hdmi");


MODULE_INFO(srcversion, "9B5210F221E3E899C9631B5");
