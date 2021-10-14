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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3cd0ad96, "ufshcd_dwc_link_startup_notify" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa37bcdcb, "tc_dwc_g210_config_20_bit" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0x67ad3cc8, "ufshcd_init" },
	{ 0x18444fb4, "ufshcd_alloc_host" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x7b09d708, "tc_dwc_g210_config_40_bit" },
	{ 0x6c4d1164, "ufshcd_remove" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0xbc11c817, "ufshcd_shutdown" },
	{ 0xdf9183f8, "ufshcd_system_suspend" },
	{ 0x6a499ac2, "ufshcd_system_resume" },
	{ 0xd36f7c4f, "ufshcd_runtime_suspend" },
	{ 0x22ad1509, "ufshcd_runtime_resume" },
	{ 0xfb533ff3, "ufshcd_runtime_idle" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ufshcd-dwc,tc-dwc-g210,ufshcd-core");

MODULE_ALIAS("pci:v000016C3d0000B101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000B102sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4891B9D354804869A237C8D");
