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
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x29361773, "complete" },
	{ 0x837a48c7, "device_wakeup_disable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cti,palmas-gpadc");
MODULE_ALIAS("of:N*T*Cti,palmas-gpadcC*");

MODULE_INFO(srcversion, "B2D10FB96A110B0C1DDD93F");
