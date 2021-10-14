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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xc0093f82, "usb_add_phy" },
	{ 0x4dd92e55, "devm_extcon_dev_register" },
	{ 0x22f00398, "devm_extcon_dev_allocate" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8d5eb965, "usb_remove_phy" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa074c8b6, "retu_write" },
	{ 0xfd7ccba2, "sysfs_notify" },
	{ 0x11757273, "extcon_set_state_sync" },
	{ 0xabb07f9d, "usb_gadget_vbus_disconnect" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x508da81c, "usb_phy_set_event" },
	{ 0xfc93356d, "usb_gadget_vbus_connect" },
	{ 0x56d1a8c5, "retu_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "retu-mfd,udc-core");


MODULE_INFO(srcversion, "65282BF6E27CA4C70C410C6");
