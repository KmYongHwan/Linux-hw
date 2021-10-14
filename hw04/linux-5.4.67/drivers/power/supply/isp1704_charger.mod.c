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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x944eeb50, "devm_usb_get_phy" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3f243ef7, "devm_usb_get_phy_by_phandle" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x2d1c6181, "usb_gadget_connect" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa8985069, "usb_gadget_disconnect" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "5261CFC53E10245CB17DE0C");
