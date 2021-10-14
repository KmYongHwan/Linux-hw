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
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x3f243ef7, "devm_usb_get_phy_by_phandle" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6114f186, "power_supply_register" },
	{ 0xc40d89f1, "wm831x_reg_lock" },
	{ 0x2ccd1a6, "wm831x_reg_unlock" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x19ae3c48, "wm831x_reg_read" },
	{ 0xb635d30f, "wm831x_auxadc_read_uv" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x95d7801d, "wm831x_set_bits" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "79FA500B28A5794FA3BCF5C");
