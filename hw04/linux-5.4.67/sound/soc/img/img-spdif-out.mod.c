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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x7505d7aa, "devm_snd_dmaengine_pcm_register" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x2652c06a, "__devm_reset_control_get" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x82520f72, "snd_soc_add_dai_controls" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cimg,spdif-out");
MODULE_ALIAS("of:N*T*Cimg,spdif-outC*");

MODULE_INFO(srcversion, "75E905587C34B07E58A919F");
