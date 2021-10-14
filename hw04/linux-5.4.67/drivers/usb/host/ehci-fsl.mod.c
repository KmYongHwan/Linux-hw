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
	{ 0xb7588a85, "usb_hcd_platform_shutdown" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x7817211e, "ehci_init_driver" },
	{ 0xc5850110, "printk" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xc80487c8, "ehci_setup" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0x9c8cf3a7, "usb_add_hcd" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xe2f10226, "__usb_create_hcd" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x92418c3f, "usb_put_hcd" },
	{ 0xc2a01d7e, "usb_remove_hcd" },
	{ 0x7af6e19, "usb_put_phy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x3ee3f491, "ehci_adjust_port_wakeup_flags" },
	{ 0x99ad2ebf, "usb_root_hub_lost_power" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "35C6D31F45D38B14F68364E");
