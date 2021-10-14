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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xd20a89aa, "iio_trigger_alloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x807a11f5, "iio_trigger_poll_chained" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0xc030aca9, "iio_trigger_using_own" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x963cf8c8, "get_device" },
	{ 0x9415ca79, "__module_get" },
	{ 0x6ddb75b6, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "8E7A88C7F6E9E1BA2BF3004");
