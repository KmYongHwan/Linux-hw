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
	{ 0xa37bcdcb, "tc_dwc_g210_config_20_bit" },
	{ 0x7b09d708, "tc_dwc_g210_config_40_bit" },
	{ 0x3cd0ad96, "ufshcd_dwc_link_startup_notify" },
	{ 0xe3fc5540, "ufshcd_pltfrm_runtime_idle" },
	{ 0xde8e567, "ufshcd_pltfrm_runtime_resume" },
	{ 0xe7dbde73, "ufshcd_pltfrm_runtime_suspend" },
	{ 0x313b8663, "ufshcd_pltfrm_resume" },
	{ 0xe08ac909, "ufshcd_pltfrm_suspend" },
	{ 0x3c78b0e8, "ufshcd_pltfrm_shutdown" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xd0ca0c80, "ufshcd_pltfrm_init" },
	{ 0x6c4d1164, "ufshcd_remove" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tc-dwc-g210,ufshcd-dwc,ufshcd-pltfrm,ufshcd-core");

MODULE_ALIAS("of:N*T*Csnps,g210-tc-6.00-20bit");
MODULE_ALIAS("of:N*T*Csnps,g210-tc-6.00-20bitC*");
MODULE_ALIAS("of:N*T*Csnps,g210-tc-6.00-40bit");
MODULE_ALIAS("of:N*T*Csnps,g210-tc-6.00-40bitC*");

MODULE_INFO(srcversion, "4BA9A326DE5E97C9C7F7953");
