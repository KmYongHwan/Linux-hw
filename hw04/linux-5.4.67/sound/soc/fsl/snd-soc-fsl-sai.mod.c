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
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x810a31e8, "snd_pcm_hw_constraint_step" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x7505d7aa, "devm_snd_dmaengine_pcm_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xbff16915, "__devm_regmap_init_mmio_clk" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cfsl,vf610-sai");
MODULE_ALIAS("of:N*T*Cfsl,vf610-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-saiC*");

MODULE_INFO(srcversion, "CF08EFEADF466788FD99E30");
