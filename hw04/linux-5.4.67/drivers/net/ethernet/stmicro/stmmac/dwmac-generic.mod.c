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
	{ 0x382c7bac, "stmmac_pltfr_pm_ops" },
	{ 0x5b65d2ff, "stmmac_pltfr_remove" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74e19da2, "stmmac_remove_config_dt" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6527a05, "stmmac_dvr_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdc54df96, "stmmac_probe_config_dt" },
	{ 0xe78f71f6, "stmmac_get_platform_resources" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "stmmac-platform,stmmac");

MODULE_ALIAS("of:N*T*Cst,spear600-gmac");
MODULE_ALIAS("of:N*T*Cst,spear600-gmacC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.50a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.50aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.610");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.610C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.70a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.70aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.710");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.710C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.00");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.00C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.10a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.10aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac");
MODULE_ALIAS("of:N*T*Csnps,dwmacC*");
MODULE_ALIAS("of:N*T*Csnps,dwxgmac-2.10");
MODULE_ALIAS("of:N*T*Csnps,dwxgmac-2.10C*");
MODULE_ALIAS("of:N*T*Csnps,dwxgmac");
MODULE_ALIAS("of:N*T*Csnps,dwxgmacC*");

MODULE_INFO(srcversion, "6D2892961339EC83CE1D42A");
