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
	{ 0xf9a482f9, "msleep" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xef9dd08a, "iio_read_mount_matrix" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x67a59418, "__devm_iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x37daa95b, "iio_show_mount_matrix" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x963cf8c8, "get_device" },
	{ 0x9415ca79, "__module_get" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0x3f8ad58c, "devm_iio_triggered_buffer_setup" },
	{ 0x96848186, "scnprintf" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0xb6f50190, "regmap_get_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "9CC7777F5D10A72A62D5598");
