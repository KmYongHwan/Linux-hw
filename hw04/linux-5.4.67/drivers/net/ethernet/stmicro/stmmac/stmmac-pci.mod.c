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
	{ 0x50877b9, "dmi_first_match" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6527a05, "stmmac_dvr_probe" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x82c0ced2, "stmmac_resume" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9cfd0b29, "pcim_iounmap_regions" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xc9f0f517, "clk_register_fixed_rate" },
	{ 0xdd3494af, "stmmac_dvr_remove" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xa7ecca72, "stmmac_suspend" },
	{ 0x52252316, "clk_unregister_fixed_rate" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xd368c71c, "pci_wake_from_d3" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "stmmac");

MODULE_ALIAS("pci:v00000700d00001108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad0000CC09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000937sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d00007102sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F01A4F0A8A6CDDA61CF5088");
