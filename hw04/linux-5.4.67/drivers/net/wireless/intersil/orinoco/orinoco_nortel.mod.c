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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x74ecbf6f, "orinoco_if_add" },
	{ 0x6cf3d081, "orinoco_init" },
	{ 0x20b542b4, "hermes_struct_init" },
	{ 0x3a583436, "alloc_orinocodev" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xe0f3e65d, "free_orinocodev" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0xc890a7e6, "orinoco_if_del" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x85e4ab82, "orinoco_down" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc5850110, "printk" },
	{ 0x320d7282, "orinoco_up" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xffe27bca, "orinoco_interrupt" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "orinoco,cfg80211");

MODULE_ALIAS("pci:v0000126Cd00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001562d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6429C56C884AD581BDA60E4");
