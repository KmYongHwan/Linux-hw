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
	{ 0x6a76b260, "da9150_set_bits" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x944eeb50, "devm_usb_get_phy" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x70c10faa, "iio_channel_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x475e1776, "iio_read_channel_processed" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0xdddf0554, "da9150_reg_read" },
	{ 0x94438fe7, "iio_channel_release" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "da9150-core,industrialio");


MODULE_INFO(srcversion, "C6E8E562C590B2F90BEBF9B");
