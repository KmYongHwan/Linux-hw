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
	{ 0x23b02ccf, "nfc_mei_phy_free" },
	{ 0x4d126af1, "mei_cldev_get_drvdata" },
	{ 0x29aad15c, "mei_phy_ops" },
	{ 0x4201ac13, "__mei_cldev_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x5959be43, "pn544_hci_remove" },
	{ 0x8b01ea6a, "mei_cldev_driver_unregister" },
	{ 0xac0a91a2, "nfc_mei_phy_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x347cd8e0, "pn544_hci_probe" },
};

MODULE_INFO(depends, "mei_phy,mei,pn544");

MODULE_ALIAS("mei:pn544:0bb17a78-2a8e-4c50-94d4-50266723775c:*:*");

MODULE_INFO(srcversion, "FA87F4A4E8310234D0714E5");
