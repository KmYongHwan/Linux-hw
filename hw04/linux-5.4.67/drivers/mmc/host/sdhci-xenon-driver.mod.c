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
	{ 0x9d65f345, "sdhci_remove_host" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x81188c30, "match_string" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xf38cd7f4, "sdhci_pltfm_init" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb81c4665, "sdhci_set_power_noreg" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x785d53e7, "sdhci_enable_sdio_irq" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xa329a74, "mmc_of_parse" },
	{ 0x37ddd1cb, "sdhci_pltfm_clk_get_max_clock" },
	{ 0x8284c5d9, "sdhci_add_host" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x8302e3cb, "sdhci_execute_tuning" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x378366a8, "sdhci_set_clock" },
	{ 0xe04f4614, "sdhci_get_property" },
	{ 0xb5c477fe, "sdhci_set_ios" },
	{ 0xe1b9f9f1, "sdhci_runtime_suspend_host" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x91020f35, "sdhci_runtime_resume_host" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x87b22bbc, "mmc_regulator_set_ocr" },
	{ 0xd760f947, "sdhci_pltfm_free" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x32509f95, "sdhci_reset" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2a941529, "sdhci_start_signal_voltage_switch" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x13b12d62, "sdhci_set_bus_width" },
};

MODULE_INFO(depends, "sdhci,sdhci-pltfm");

MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhciC*");

MODULE_INFO(srcversion, "BC7A54C598C3654A649F4D3");
