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
	{ 0xe3fc5540, "ufshcd_pltfrm_runtime_idle" },
	{ 0xde8e567, "ufshcd_pltfrm_runtime_resume" },
	{ 0xe7dbde73, "ufshcd_pltfrm_runtime_suspend" },
	{ 0x313b8663, "ufshcd_pltfrm_resume" },
	{ 0xe08ac909, "ufshcd_pltfrm_suspend" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3eb1d4a7, "ufshcd_dme_set_attr" },
	{ 0xd0ca0c80, "ufshcd_pltfrm_init" },
	{ 0x6c4d1164, "ufshcd_remove" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ufshcd-pltfrm,ufshcd-core");

MODULE_ALIAS("of:N*T*Ccdns,ufshc");
MODULE_ALIAS("of:N*T*Ccdns,ufshcC*");
MODULE_ALIAS("of:N*T*Ccdns,ufshc-m31-16nm");
MODULE_ALIAS("of:N*T*Ccdns,ufshc-m31-16nmC*");

MODULE_INFO(srcversion, "261BA04B8D3D6581E49A814");
