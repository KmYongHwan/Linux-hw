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
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xaf01bb80, "usb_add_gadget_udc" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x76964c57, "usb_get_phy" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4f2fc5bd, "usb_phy_set_charger_current" },
	{ 0x37a0cba, "kfree" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x7af6e19, "usb_put_phy" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x9286c9fc, "usb_del_gadget_udc" },
	{ 0xabb07f9d, "usb_gadget_vbus_disconnect" },
	{ 0xfc93356d, "usb_gadget_vbus_connect" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "11ADF71A837561B01B25DB1");
